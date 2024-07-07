cmake_minimum_required(VERSION 3.28)

project("Simplest Module: Exporting a single function")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main)

target_sources(main 
    PRIVATE
        main.cpp
    PRIVATE
        FILE_SET CXX_MODULES
        FILES
            simpleIntegerReturn.cpp
        )