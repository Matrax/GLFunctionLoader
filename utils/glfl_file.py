###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import re

###################################
#                                 #
# parse_gl_functions_from_lines() #
#                                 #
###################################

def parse_gl_functions_from_lines(lines : list):

    if(lines == None):
        return

    functions = []
    for line in lines:

        if "GLAPI" in line and "#ifndef" not in line and "#define" not in line:
            match_function = re.findall("APIENTRY [\w]+", line)

            if(match_function != None and len(match_function) > 0):
                function_name = match_function[0].removeprefix("APIENTRY ")

                if(function_name != None):
                    functions.append(function_name)
                    
    return functions

###################################
#                                 #
#     write_gl_header_file()      #
#                                 #
###################################

def write_gl_header_file(functions : list, gl_loader_file_name : str, gl_header_file_name : str, namespace : str):

    if(functions == None or gl_loader_file_name == None or gl_header_file_name == None or namespace == None):
        return

    # Create the header-only file
    header_file_content = ""
    header_file_content += "#pragma once\n\n"
    header_file_content += "#if defined(_WIN32) || defined(_WIN64)\n"
    header_file_content += "#include <Windows.h>\n"
    header_file_content += "#endif\n\n"
    header_file_content += "#include <KHR/khrplatform.h>\n"
    header_file_content += "#include <" + gl_header_file_name + ">\n\n"

    # Add function pointers
    header_file_content += "// OpenGL Functions signature\n\n"
    for function in functions:
        header_file_content += "inline PFN" + function.upper() + "PROC " + function + " = nullptr;\n"

    # Add the OpenGL function loader
    header_file_content += "\ninline void * " + namespace + "_Load_Function(const char * name)\n"
    header_file_content += "{\n"
    header_file_content += "\tvoid * result = nullptr;\n\n"
    header_file_content += "\t#if defined(_WIN32) || defined(_WIN64)\n"
    header_file_content += "\tresult = (void*) wglGetProcAddress(name);\n"
    header_file_content += "\tif(result == nullptr)\n"
    header_file_content += "\t{\n"
    header_file_content += "\t\tHMODULE module = LoadLibraryA(\"opengl32.dll\");\n"
    header_file_content += "\t\tif(module != nullptr)\n"
    header_file_content += "\t\t\tresult = (void *) GetProcAddress(module, name);\n"
    header_file_content += "\t}\n"
    header_file_content += "\t#endif\n\n"
    header_file_content += "\treturn result;\n"
    header_file_content += "}\n\n"

    # Add the OpenGL loader
    header_file_content += "inline unsigned long " + namespace + "_Initialize()\n"
    header_file_content += "{\n"
    header_file_content += "\tunsigned long count = 0;\n\n"
    for function in functions:
        function_load_line = function + " = (PFN" + function.upper() + "PROC) " + namespace + "_Load_Function(\"" + function + "\");"
        header_file_content += "\t" + function_load_line + " \n"
        header_file_content += "\tif(" + function + " != nullptr)" + " count++;\n"
    header_file_content += "\n\treturn count; \n}\n\n"


    # Write the file
    if header_file_content != None:
        header_file = open("includes/glfl/" + gl_loader_file_name, "w")
        header_file.write(header_file_content)
        header_file.close()