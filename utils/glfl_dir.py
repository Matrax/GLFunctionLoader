###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import os

###################################
#                                 #
#    make_dir_if_not_present()    #
#                                 #
###################################
def make_dir_if_not_present(dir : str):
    if os.path.exists(dir) == False:
            os.mkdir(dir)