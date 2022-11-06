cmake_minimum_required(VERSION 3.0)

project(SWAP)

#include_directories(include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize-recover=address -g")

add_executable(main_cmake main.cpp)
