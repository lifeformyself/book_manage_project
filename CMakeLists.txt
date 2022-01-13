cmake_minimum_required(VERSION 3.16)
project(book_manage_project)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE "Debug")

include_directories(book_func)
include_directories(HEAD)

add_executable(book_manage_project
        book_func/book_registration.cpp
        book_func/select.cpp
        book_func/showMenu.cpp
        HEAD/head.h
        main.cpp)
