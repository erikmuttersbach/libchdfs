cmake_minimum_required(VERSION 2.8.4)
project(libchdfs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory (src)
include_directories(libchdfs ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(SOURCE_FILES main.cpp)
add_executable(libchdfs ${SOURCE_FILES})