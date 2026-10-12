cmake_minimum_required(VERSION 4.3)
project(Restaurant)

set(CMAKE_CXX_STANDARD 23)

add_executable(Restaurant main.cpp
        Menu.cpp
        Menu.h)
