cmake_minimum_required(VERSION 2.8.4)
project(libchdfs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

include_directories(libchdfs ${CMAKE_CURRENT_SOURCE_DIR}/src)
file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.cc)

#set(SOURCE_FILES main.cpp)
add_executable(libchdfs main.cpp ${SOURCE_FILES})