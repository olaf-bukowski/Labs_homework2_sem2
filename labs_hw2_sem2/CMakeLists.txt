cmake_minimum_required(VERSION 3.5)

project(labs_hw2_sem2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(labs_hw2_sem2 main.cpp)

install(TARGETS labs_hw2_sem2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
