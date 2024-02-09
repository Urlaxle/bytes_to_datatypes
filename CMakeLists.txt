cmake_minimum_required(VERSION 3.20)
project(bytes_to_datatypes)

# Sets CPP standard to 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSION OFF)

# Generaiting a compile_commands.json file
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Locaiting dependencies
# find_package(EIGEN REQUIRED)

# Include directories
include_directories(include)

# Define a library
#add_library(bytes_to_datatypes SHARED
#    src/bytes_to_datatypes.cc
#    )

# Link library to any dependencies
#target_link_libraries(bytes_to_datatypes)

# Build an executable for testing if this project is built by itself
#if (CMAKE_PROJECT_NAME STREQUAL workhorse_dvl)
#        add_executable(dvl_test src/main.cc)
#        target_link_libraries(dvl_test workhorse_lib)
#endif()

# Testing
add_executable(player src/b2d_player.cc)

