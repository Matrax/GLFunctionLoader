# Imports
import os
import os.path
import sys
import requests

# Functions
def parse_function(line : str):
    size_str = len(line)
    mode = "PARAMS"
    params_function = ""
    name_function = ""
    return_function = ""
    for i in range(size_str - 1, -1, -1):
        if(mode == "NAME" and line[i] == " "):
            mode = "RETURN"
        if mode == "PARAMS" and (i + 1) < size_str and line[i + 1] == "(" and line[i] == " ":
            mode = "NAME"
        if mode == "PARAMS":
            params_function += line[i]
        if mode == "NAME":
            name_function += line[i]
        if mode == "RETURN":
            return_function += line[i]
    return_function = return_function[::-1].replace("GLAPI", "").replace("APIENTRY", "").removeprefix(" ").removesuffix(" ")
    name_function = name_function[::-1].removesuffix(" ")
    params_function = params_function[::-1]

    return (return_function, name_function, params_function, "PFN" + name_function.upper() + "PROC", "impl_PFN" + name_function.upper() + "PROC")

def download(url : str, filename : str):
    request = requests.get(url, allow_redirects=True)
    w_file = open(filename, "wb").write(request.content)
    return open(filename, "r")

def get_all_gl_functions(lines : list):
    functions = []
    for line in lines:
        if "GLAPI" in line and "#ifndef" not in line and "#define" not in line:
            return_type, function_name, function_params, function_pointer_name, function_implementation = parse_function(line.removesuffix(";\n"))
            functions.append((return_type, function_name, function_params, function_pointer_name, function_implementation))
    return functions

def create_header_file(functions : list):
    # Create the header-only file
    header_file = open("includes/gl_function_loader.hpp", "w")
    header_file.write("#ifndef GL_FUNCTION_LOADER_HPP\n")
    header_file.write("#define GL_FUNCTION_LOADER_HPP\n\n")
    header_file.write("#if defined(_WIN32) or defined(_WIN64)\n")
    header_file.write("#include <Windows.h>\n")
    header_file.write("#endif\n\n")
    header_file.write("#include \"KHR/khrplatform.h\"\n")
    header_file.write("#include \"glcorearb.h\"\n\n")
    header_file.write("class GLFunctionLoader {\n\n")
    header_file.write("public:\n\n")
    # Add all the functions pointers
    for function in functions:
        return_type, function_name, function_params, function_pointer_name, function_implementation = function
        function_var = "inline static " + return_type + "(*" + function_name + "_ptr" + ")" + function_params + " = nullptr;"
        function_def_line = "#define " + function_name + " GLFunctionLoader::" + function_name + "_ptr"
        header_file.write(function_var + "\n")
        header_file.write(function_def_line + "\n\n")
    # Add the OpenGL function loader
    header_file.write("static void * Load_Function(const char * name)\n")
    header_file.write("{\n")
    header_file.write("\tvoid * result = nullptr;\n\n")
    header_file.write("\t#if defined(_WIN32) or defined(_WIN64)\n")
    header_file.write("\tresult = (void*) wglGetProcAddress(name);\n")
    header_file.write("\tif(result == nullptr)\n")
    header_file.write("\t{\n")
    header_file.write("\t\tHMODULE module = LoadLibraryA(\"opengl32.dll\");\n")
    header_file.write("\t\tif(module != nullptr)\n")
    header_file.write("\t\t\tresult = (void *) GetProcAddress(module, name);\n")
    header_file.write("\t}\n")
    header_file.write("\t#endif\n\n")
    header_file.write("\treturn result;\n")
    header_file.write("}\n")
    # Add the OpenGL loader
    header_file.write("static unsigned long Initizalize()\n")
    header_file.write("{\n")
    header_file.write("\tunsigned long count = 0;\n\n")
    for function in functions:
        return_type, function_name, function_params, function_pointer_name, function_implementation = function
        function_load_line = function_name + "_ptr = (" + function_pointer_name + ") Load_Function(\"" + function_name + "\");"
        header_file.write("\t" + function_load_line + " \n")
        header_file.write("\tif(" + function_name + "_ptr != nullptr)" + " count++;\n")
    header_file.write("\n\treturn count; \n}\n")
    # End of header
    header_file.write("};\n\n")
    header_file.write("#endif")
    header_file.close()

# Main
if __name__ == '__main__':

    print("Starting ...")
    
    # Check if the "includes" directory exist
    if os.path.exists("includes") == False:
        os.mkdir("includes")

    # Download the glcorearb.h from Khronos
    print("Downloading glcorearb.h ...")
    khronos_url = "https://registry.khronos.org/OpenGL/api/GL/glcorearb.h"
    glcorearb_file = download(khronos_url, "includes/glcorearb.h")
    print("glcorearb.h downloaded !")

    # Check if the "includes/KHR" directory exist
    if os.path.exists("includes/KHR") == False:
        os.mkdir("includes/KHR")

    # Download the khrplatform.h from Khronos
    print("Downloading khrplatform.h ...")
    khronos_url = "https://www.khronos.org/registry/EGL/api/KHR/khrplatform.h"
    khrplatform_file = download(khronos_url, "includes/KHR/khrplatform.h")
    print("khrplatform.h downloaded !")

    # Read all the lines from the file
    lines = glcorearb_file.readlines()

    # Search all the OpenGL functions
    functions = get_all_gl_functions(lines)

    # Create the header file
    create_header_file(functions)

    # Close
    glcorearb_file.close()
    khrplatform_file.close()

    print("File gl_function_loader.hpp created !")
