# Specify the minimum version for CMake

cmake_minimum_required(VERSION 3.11)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# Project's name

project(Sample-CPP)

set(SAMPLE-CPP_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/src/apps ${PROJECT_SOURCE_DIR}/src/channels
${PROJECT_SOURCE_DIR}/src/controller ${PROJECT_SOURCE_DIR}/security ${PROJECT_SOURCE_DIR}/src/receiver
${PROJECT_SOURCE_DIR}/src/transmitter ${PROJECT_SOURCE_DIR}/src/include)

add_subdirectory(src)
add_subdirectory(test)

# we use this to get code coverage
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()

# Set the output folder where your program will be created
#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(CMAKE_INCLUDE_PATH "./include")

#include_directories($(CMAKE_SOURCE_DIR))
#include_directories("./src/include ")

# The following folder will be included

#file(GLOB SOURCES "src/apps/*.cpp")

#add_executable(testApp ${SOURCES})
