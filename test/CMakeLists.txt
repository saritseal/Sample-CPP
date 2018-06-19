cmake_minimum_required(VERSION 3.11)
project(TestRunner)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

set(SOURCE_FILES main_runner.cpp)
file(GLOB SOURCES "apps/*.cpp" "channels/*.cpp" "controller/*.cpp" "receiver/*.cpp" "security/*.cpp" "transmitter/*.cpp" "util/*.cpp")

add_subdirectory(lib/googletest)

include_directories(${SAMPLE-CPP_INCLUDE_DIR})
include_directories(lib/googletest/googletest/include)

add_executable(TestRunner ${SOURCE_FILES})
target_link_libraries( TestRunner apps gtest)
target_link_libraries( TestRunner channels gtest)

install(TARGETS TestRunner DESTINATION bin)
