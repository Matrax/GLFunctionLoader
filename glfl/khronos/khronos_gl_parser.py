###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import re

###################################
#                                 #
#           FUNCTIONS             #
#                                 #
###################################

def parse_gl_functions_from_lines(lines : list):

    if(lines == None):
        return

    # Functions list
    functions = []

    # For every lines
    for line in lines:

        # Search every lines that are OpenGL functions
        if "GLAPI" in line and "#ifndef" not in line and "#define" not in line:
            match_function = re.findall("APIENTRY [\w]+", line)
            if(match_function != None and len(match_function) > 0):
                function_name = match_function[0].removeprefix("APIENTRY ")
                if(function_name != None):
                    functions.append(function_name)
                    
    return functions