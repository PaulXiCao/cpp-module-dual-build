cmake_minimum_required(VERSION 3.28)
project(moduleExamples_moduleVsHeaderSwitch)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

OPTION(ENABLE_MODULES "Enable modules" ON)

if(ENABLE_MODULES)
    ADD_DEFINITIONS(-DUSE_MODULES)
endif(ENABLE_MODULES)

add_executable(main)

target_sources(main 
    PRIVATE
        main.cpp
        myHeader.cpp
    PRIVATE
        FILE_SET HEADERS
        FILES
            myHeader.hpp
    )
if(ENABLE_MODULES)
    target_sources(main 
        PRIVATE
            FILE_SET CXX_MODULES
            FILES
                myModule.cpp
        )
endif(ENABLE_MODULES)
