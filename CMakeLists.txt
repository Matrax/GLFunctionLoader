#CMake version
cmake_minimum_required(VERSION 3.20)

# Project
project(GLFunctionLoader
        DESCRIPTION "Python program that generate C++17 opengl loader library"
        VERSION 1.0
        LANGUAGES CXX)

# Add the interface library
add_library(GLFunctionLoader INTERFACE)

# include directories
target_include_directories(GLFunctionLoader INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/includes")

# Install
if (WIN32)
    install(FILES glfl.py DESTINATION "${CMAKE_INSTALL_PREFIX}")
elseif(LINUX)
    install(FILES glfl.py DESTINATION "${CMAKE_INSTALL_PREFIX}/bin")
endif()