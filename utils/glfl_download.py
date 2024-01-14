###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import os
import requests

###################################
#                                 #
#    download_and_open_file()     #
#                                 #
###################################
def download_and_open_file(url : str, filename : str):

    if(url == None or url == "" or filename == None or filename == ""):
        return None

    if os.path.exists(filename) == False:
        request = requests.get(url, allow_redirects=True)
        w_file = open(filename, "wb")
        w_file.write(request.content)
        w_file.close()

    return open(filename, "r")

###################################
#                                 #
#         download_file()         #
#                                 #
###################################
def download_file(url : str, filename : str):

    if(url == None or url == "" or filename == None or filename == ""):
        return None

    if os.path.exists(filename) == False:
        request = requests.get(url, allow_redirects=True)
        w_file = open(filename, "wb")
        w_file.write(request.content)
        w_file.close()


        