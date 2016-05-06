cmake_minimum_required(VERSION 3.5)
project(knr)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")
set(CMAKE_CXX_FLAGS "-O2")        ## Optimize

set(SOURCE_FILES 1_1.c 1_2.c)
add_executable(knr ${SOURCE_FILES})#[[]]