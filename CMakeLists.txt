cmake_minimum_required(VERSION 3.21)
project(CodeTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(CodeTest main.cpp List.cpp List.h Sort.h util.h)
