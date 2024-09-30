###################################
#                                 #
#             COMMAND             #
#                                 #
###################################

def info_command():
    """
    This command print informations and available commands of GLFL.
    """

    print("GLFunctionLoader (GLFL) download for you the OpenGL header you want from the Khronos registry and make a C++ functions loader from it.")
    print("All the headers will be downloaded in a \"includes\" directory inside the same directory where you called glfl.py.")
    print("Headers : [glcorearb, glext]")
    print("Usage: glfl [header]")
    print("Example: glfl glcorearb")