cmake_minimum_required(VERSION 3.27)
project(new_bootbot)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(new_bookbot main.cpp stats.cpp)

target_include_directories(new_bookbot PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})