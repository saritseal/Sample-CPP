cmake_minimum_required(VERSION 2.8)
project(apps C CXX)

SET(Boost_USE_STATIC_LIBS ON)
find_package(Boost COMPONENTS log REQUIRED)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_INCLUDE_PATH ${CMAKE_SOURCE_DIR}/src/include)

include_directories($(CMAKE_SOURCE_DIR))
include_directories(${CMAKE_SOURCE_DIR}/src/include)

#The following folder will be included
file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/apps/*.cpp)

# set_target_properties(apps PROPERTIES LINKER_LANGUAGE CPP)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIR})

add_executable(sampleapps ${SOURCES})
target_link_libraries(sampleapps ${Boost_LIBRARIES} )
