###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import glfl.files.glfl_gl_file
import glfl.utils.file_utils
import glfl.khronos.khronos_gl_parser
import glfl.requests.downloader

###################################
#                                 #
#             COMMAND             #
#                                 #
###################################

def glext_command():

    # Make all needed directories
    glfl.utils.file_utils.make_dir_if_not_present("includes")
    glfl.utils.file_utils.make_dir_if_not_present("includes/GL")
    glfl.utils.file_utils.make_dir_if_not_present("includes/KHR")

    # Download the khrplatform.h from Khronos
    try:
        print("Downloading [khrplatform.h]")
        khronos_khr_file_content = glfl.requests.downloader.download_content_from_url(glfl.requests.downloader.KHR_PLATFORM_URL)
        glfl.utils.file_utils.write_new_binary_file("includes/KHR/khrplatform.h", khronos_khr_file_content)
    except Exception as exception:
        raise(exception)
    
    # Download glext.h
    khronos_header_file_content = None
    try:
        print("Downloading [glext.h]")
        khronos_header_file_content = glfl.requests.downloader.download_content_from_url(glfl.requests.downloader.GLEXT_URL)
        glfl.utils.file_utils.write_new_binary_file("includes/GL/glext.h", khronos_header_file_content)
    except Exception as exception:
        raise(exception)

    # Create the GLFL loader file
    if khronos_header_file_content == None:
        raise Exception("Khronos OpenGL file is not downloaded !")

    # Read all the glcorearb file
    lines = glfl.utils.file_utils.read_all_lines_from_file("includes/GL/glext.h")
    if(len(lines) <= 0):
        raise Exception("The khronos OpenGL file is empty !")

    # Parse all the OpenGL functions
    functions = glfl.khronos.khronos_gl_parser.parse_gl_functions_from_lines(lines)

    # Write the glfl loader file
    glfl.files.glfl_gl_file.write_gl_header_file(functions, "glfl-glext.hpp", "glext.h", "GLFL_GLEXT")
    print("glfl-glext.hpp OK !")