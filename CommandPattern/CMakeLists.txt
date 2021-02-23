cmake_minimum_required(VERSION 3.5)
project(CommandPattern) # Project name
set(CMAKE_CXX_FLAGS "-Wextra -Wall -Werror -pedantic -std=c++11") # Compilation flags

file(GLOB C_FILES Src/*.cpp)

# The following folder will be included
#include_directories(${PROJECT_SRC_DIR}/inc)

# Set the target name and source
add_executable(CommandPattern ${C_FILES})
