###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import utils.glfl_download as glfl_download
import utils.glfl_file as glfl_file
import utils.glfl_dir as glfl_dir
import sys

###################################
#                                 #
#           URLS                  #
#                                 #
###################################

KHR_PLATFORM_URL = "https://www.khronos.org/registry/EGL/api/KHR/khrplatform.h"
GLCOREARB_URL = "https://registry.khronos.org/OpenGL/api/GL/glcorearb.h"
GLEXT_URL = "https://registry.khronos.org/OpenGL/api/GL/glext.h"

###################################
#                                 #
#             COMMANDS            #
#                                 #
###################################

def glcorearb_command():
    # Make includes directory
    glfl_dir.make_dir_if_not_present("includes")

    # Download the khrplatform.h from Khronos
    print("Downloading ... [khrplatform.h]")
    glfl_dir.make_dir_if_not_present("includes/KHR")
    glfl_download.download_file(KHR_PLATFORM_URL, "includes/KHR/khrplatform.h")
    
    # Download glcorearb.h
    print("Downloading ... [glcorearb.h]")
    glfl_dir.make_dir_if_not_present("includes/glfl")
    header = glfl_download.download_and_open_file(GLCOREARB_URL, "includes/glcorearb.h")
    
    if header != None:
        lines = header.readlines()
        functions = glfl_file.parse_gl_functions_from_lines(lines)
        glfl_file.write_gl_header_file(functions, "glfl-glcorearb.hpp", "glcorearb.h", "GLFL_GLCOREARB")
        header.close()
        print("glfl-glcorearb.hpp OK !")

def glext_command():
    # Make includes directory
    glfl_dir.make_dir_if_not_present("includes")

    # Download the khrplatform.h from Khronos
    print("Downloading ... [khrplatform.h]")
    glfl_dir.make_dir_if_not_present("includes/KHR")
    glfl_download.download_file(KHR_PLATFORM_URL, "includes/KHR/khrplatform.h")
    
    # Download glext.h
    print("Downloading ... [glext.h]")
    glfl_dir.make_dir_if_not_present("includes/glfl")
    header = glfl_download.download_and_open_file(GLEXT_URL, "includes/glext.h")
    
    if header != None:
        lines = header.readlines()
        functions = glfl_file.parse_gl_functions_from_lines(lines)
        glfl_file.write_gl_header_file(functions, "glfl-glext.hpp", "glext.h", "GLFL_GLEXT")
        header.close()
        print("glfl-glext.hpp OK !")

def info_command():
    #Print informations about GLFL
    print("GLFunctionLoader (GLFL) download for you the OpenGL header you want from the Khronos registry and make a C++ functions loader from it.")
    print("All the headers will be downloaded in a \"includes\" directory inside the same directory where you called glfl.py.")
    print("Headers : [glcorearb, glext]")
    print("Usage: glfl [header]")
    print("Example: glfl glcorearb")

###################################
#                                 #
#             MAIN                #
#                                 #
###################################
    
if __name__ == '__main__':
    print("===================")
    if(len(sys.argv) > 1):
        if(sys.argv[1] == "glcorearb"):
            glcorearb_command()
        elif(sys.argv[1] == "glext"):
            glext_command()
    else:
        info_command()
    print("===================")
