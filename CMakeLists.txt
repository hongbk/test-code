cmake_minimum_required(VERSION 3.7)
project(Test)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c HeapSort.cpp HeapSort.h test.cpp test2.cpp)
add_executable(Test ${SOURCE_FILES})