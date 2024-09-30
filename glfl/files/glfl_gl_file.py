###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import glfl.utils.file_utils

###################################
#                                 #
#           FUNCTIONS             #
#                                 #
###################################

def write_gl_header_file(functions : list, gl_loader_file_name : str, gl_header_file_name : str, namespace : str):

    if(functions == None or gl_loader_file_name == None or gl_header_file_name == None or namespace == None):
        raise Exception("Bad function args")

    # Create the header-only file
    header_file_content = "// FILE WRITTED WITH GLFL (GL_FUNCTION_LOADER)\n"
    header_file_content += "#pragma once\n\n"
    header_file_content += "//OS INCLUDES\n"
    header_file_content += "#if defined(_WIN32) || defined(_WIN64)\n"
    header_file_content += "\t#define WIN32_LEAN_AND_MEAN 1\n"
    header_file_content += "\t#include <Windows.h>\n"
    header_file_content += "#endif\n\n"
    header_file_content += "//KHRONOS INCLUDES\n"
    header_file_content += "#include <KHR/khrplatform.h>\n"
    header_file_content += "#include <GL/" + gl_header_file_name + ">\n\n"

    # Add function pointers
    header_file_content += "// OpenGL Functions signature\n"
    for function in functions:
        header_file_content += "inline PFN" + function.upper() + "PROC " + function + " = nullptr;\n"

    # Add the OpenGL function loader
    header_file_content += "\ninline void * " + namespace + "_Load_Function(const char * name)\n"
    header_file_content += "{\n"
    header_file_content += "\tvoid * result = nullptr;\n\n"
    header_file_content += "\t//WIN32 LOADING\n"
    header_file_content += "\t#if defined(_WIN32) || defined(_WIN64)\n"
    header_file_content += "\t\tresult = (void*) wglGetProcAddress(name);\n"
    header_file_content += "\t\tif(result == nullptr)\n"
    header_file_content += "\t\t{\n"
    header_file_content += "\t\t\tHMODULE module = LoadLibraryA(\"opengl32.dll\");\n"
    header_file_content += "\t\t\tif(module != nullptr)\n"
    header_file_content += "\t\t\t\tresult = (void *) GetProcAddress(module, name);\n"
    header_file_content += "\t\t}\n"
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

    # Make all needed directories
    glfl.utils.file_utils.make_dir_if_not_present("includes")
    glfl.utils.file_utils.make_dir_if_not_present("includes/GL")

    # Write the file
    glfl.utils.file_utils.write_new_file("includes/GL/" + gl_loader_file_name, header_file_content)