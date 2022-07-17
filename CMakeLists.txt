cmake_minimum_required(VERSION 3.22)
project(bank_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bank_cpp
        bank.cpp
        main.cpp
        bank.h)
