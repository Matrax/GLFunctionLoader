###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import os
import os.path
import requests
import re
import sys

###################################
#                                 #
#           download()            #
#                                 #
###################################
def download(url : str, filename : str):
    if os.path.exists("includes/" + filename) == False:
        request = requests.get(url, allow_redirects=True)
        w_file = open(filename, "wb")
        w_file.write(request.content)
    return open(filename, "r")

###################################
#                                 #
#     get_all_gl_functions()      #
#                                 #
###################################
def get_all_gl_functions(lines : list):
    functions = []
    for line in lines:
        if "GLAPI" in line and "#ifndef" not in line and "#define" not in line:
            match_function = re.findall("APIENTRY [\w]+", line)
            if(len(match_function) > 0):
                function_name = match_function[0].removeprefix("APIENTRY ")
                functions.append(function_name)
    return functions

###################################
#                                 #
#       create_header_file()      #
#                                 #
###################################
def create_header_file(functions : list, loader_file_name : str, gl_header_file_name : str, namespace : str):
    # Create the header-only file
    header_file = open("includes/" + loader_file_name, "w")
    header_file.write("#pragma once\n\n")
    header_file.write("#if defined(_WIN32) || defined(_WIN64)\n")
    header_file.write("#include <Windows.h>\n")
    header_file.write("#endif\n\n")
    header_file.write("#include <KHR/khrplatform.h>\n")
    header_file.write("#include <" + gl_header_file_name + ">\n\n")
    header_file.write("namespace " + namespace + " {\n\n")
    # Add function pointers
    header_file.write("// OpenGL Functions signature\n\n")
    for function in functions:
        header_file.write("inline static PFN" + function.upper() + "PROC " + function + " = nullptr;\n")
    # Add the OpenGL function loader
    header_file.write("\nstatic void * Load_Function(const char * name)\n")
    header_file.write("{\n")
    header_file.write("\tvoid * result = nullptr;\n\n")
    header_file.write("\t#if defined(_WIN32) || defined(_WIN64)\n")
    header_file.write("\tresult = (void*) wglGetProcAddress(name);\n")
    header_file.write("\tif(result == nullptr)\n")
    header_file.write("\t{\n")
    header_file.write("\t\tHMODULE module = LoadLibraryA(\"opengl32.dll\");\n")
    header_file.write("\t\tif(module != nullptr)\n")
    header_file.write("\t\t\tresult = (void *) GetProcAddress(module, name);\n")
    header_file.write("\t}\n")
    header_file.write("\t#endif\n\n")
    header_file.write("\treturn result;\n")
    header_file.write("}\n\n")
    # Add the OpenGL loader
    header_file.write("static unsigned long Initialize()\n")
    header_file.write("{\n")
    header_file.write("\tunsigned long count = 0;\n\n")
    for function in functions:
        function_load_line = function + " = (PFN" + function.upper() + "PROC) Load_Function(\"" + function + "\");"
        header_file.write("\t" + function_load_line + " \n")
        header_file.write("\tif(" + function + " != nullptr)" + " count++;\n")
    header_file.write("\n\treturn count; \n}\n\n")
    # End of header
    header_file.write("}\n\n")
    # Add function defines
    header_file.write("// Defines\n\n")
    for function in functions:
        header_file.write("#define " + function + " " + namespace + "::" + function + "\n")
    header_file.close()

###################################
#                                 #
#             MAIN                #
#                                 #
###################################
if __name__ == '__main__':

    if(len(sys.argv) > 1):

        # Start
        print("===================")
        # Check if the "includes" directory exist
        if os.path.exists("includes") == False:
            os.mkdir("includes")
        # Check if the "includes/KHR" directory exist
        if os.path.exists("includes/KHR") == False:
            os.mkdir("includes/KHR")
        # Download the khrplatform.h from Khronos
        print("Downloading [khrplatform.h]")
        khronos_url = "https://www.khronos.org/registry/EGL/api/KHR/khrplatform.h"
        khrplatform_file = download(khronos_url, "includes/KHR/khrplatform.h")
        khrplatform_file.close()

        if(sys.argv[1] == "glcorearb"):

            # Download the glcorearb.h from Khronos
            print("Downloading [glcorearb.h]")
            khronos_url = "https://registry.khronos.org/OpenGL/api/GL/glcorearb.h"
            header = download(khronos_url, "includes/glcorearb.h")
            # Read all the lines from the file
            lines = header.readlines()
            # Search all the OpenGL functions
            functions = get_all_gl_functions(lines)
            # Create the header file
            create_header_file(functions, "glfl-glcorearb.hpp", "glcorearb.h", "GLFL_GLCOREARB")
            # Close
            header.close()
            # End
            print("glfl-glcorearb.hpp OK !")
            print("===================")

        if(sys.argv[1] == "glext"):

            # Download the glcorearb.h from Khronos
            print("Downloading [glext.h]")
            khronos_url = "https://registry.khronos.org/OpenGL/api/GL/glext.h"
            header = download(khronos_url, "includes/glext.h")
            # Read all the lines from the file
            lines = header.readlines()
            # Search all the OpenGL functions
            functions = get_all_gl_functions(lines)
            # Create the header file
            create_header_file(functions, "glfl-glext.hpp", "glext.h", "GLFL_GLEXT")
            # Close
            header.close()
            # End
            print("glfl-glext.hpp OK !")
            print("===================")

    else:
        
        print("GLFunctionLoader (GLFL) download for you the OpenGL header you want from the Khronos registry and make a C++ functions loader from it.")
        print("All the headers will be downloaded in a \"includes\" directory inside the same directory where you called GLFL.")
        print("Headers : [glcorearb, glext]")
        print("Usage: glfl [header]")
        print("Example: glfl glcorearb")