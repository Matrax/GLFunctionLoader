###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import os

###################################
#                                 #
#           FUNCTIONS             #
#                                 #
###################################
        
def make_dir_if_not_present(dir : str):
    if os.path.exists(dir) == False:
            os.mkdir(dir)

def write_new_file(path: str, content: str):
      
    # Open the file
    w_file = open(path, "w")
    if w_file.closed == True:
        raise Exception("Can't open the file " + path)
    
    # Write the content
    if len(content) > 0:
        w_file.write(content)

    # Close the file
    w_file.close()

def write_new_binary_file(path: str, content: str):
      
    # Open the file
    w_file = open(path, "wb")
    if w_file.closed == True:
        raise Exception("Can't open the file " + path)
    
    # Write the content
    if len(content) > 0:
        w_file.write(content)

    # Close the file
    w_file.close()

def read_all_lines_from_file(path: str) -> list:

    # Open the file
    r_file = open(path, "r")
    if r_file.closed == True:
        raise Exception("Can't open the file " + path)

    # Read all lines
    lines = r_file.readlines()

    # Close the file
    r_file.close()

    return lines