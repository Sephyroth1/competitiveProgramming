# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.13)

# Set the project name
project(Pro)

# Specify the C++ standard
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-O2 -Wall)
# Add the executable to be built
add_executable(prog src/contests/easyDemonProblem.cpp)