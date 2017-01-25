cmake_minimum_required(VERSION 3.6)
project(hailstats)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES hailstats.cpp)
add_executable(hailstats ${SOURCE_FILES})