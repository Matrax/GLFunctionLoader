#CMake version
cmake_minimum_required(VERSION 3.20)

# options
option(BUILD_TESTS "Build the tests" OFF)

# Set CMake properties
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# GLFL variables
set(GLFL_LIB_NAME "GLFunctionLoader")
set(GLFL_LIB_VERSION 1.0)
set(GLFL_INCLUDES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/includes")

# Project
project(${GLFL_LIB_NAME}  
        DESCRIPTION "C++17 OpenGL function loader"
        VERSION ${GLFL_LIB_VERSION} 
        LANGUAGES CXX)

# Add the interface library
add_library(${GLFL_LIB_NAME} INTERFACE)
target_include_directories(${GLFL_LIB_NAME} INTERFACE ${GLFL_INCLUDES_DIR})
