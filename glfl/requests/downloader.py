###################################
#                                 #
#           IMPORTS               #
#                                 #
###################################

import requests

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
#           FUNCTIONS             #
#                                 #
###################################

def download_content_from_url(url : str) -> str:

    # Check function args
    if url == None or url == "":
        raise Exception("Bad function args")

    # Download file
    request = requests.get(url, allow_redirects=True)

    # If error, return empty string
    if request.status_code != 200:
        raise Exception("Error on download the file from " + url)

    return request.content