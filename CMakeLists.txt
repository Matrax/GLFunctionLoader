#CMake version
cmake_minimum_required(VERSION 3.8)

# options
option(BUILD_TESTS "Build the tests" OFF)

# Project
project(GLFunctionLoader
        DESCRIPTION "Python program to generate C++17 opengl loader library"
        VERSION 1.0
        LANGUAGES CXX)

# Add the interface library
add_library(GLFunctionLoader INTERFACE)

# include directories
target_include_directories(GLFunctionLoader INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/includes")
