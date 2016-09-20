cmake_minimum_required(VERSION 3.6)
project(ds_2_seq_ortherList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES  main.c LinkList.h)
add_executable(ds_2_seq_ortherList ${SOURCE_FILES})