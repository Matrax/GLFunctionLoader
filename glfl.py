###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import glfl.commands.glcorearb_command
import glfl.commands.glext_command
import glfl.commands.info_command
import sys

###################################
#                                 #
#             MAIN                #
#                                 #
###################################
    
if __name__ == '__main__':
    
    #If no args
    if len(sys.argv) <= 1:
        glfl.commands.info_command.info_command()

    # If contains args
    if len(sys.argv) > 1:
        try:
            # If glcorearb
            if(sys.argv[1] == "glcorearb"):
                glfl.commands.glcorearb_command.glcorearb_command()
            # If glext
            elif(sys.argv[1] == "glext"):
                glfl.commands.glext_command.glext_command()
        except Exception as exception:
            print(exception)
