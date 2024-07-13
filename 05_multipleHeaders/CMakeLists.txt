cmake_minimum_required(VERSION 3.28)
project(multipleHeaders)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_MODULES "Enable modules" ON)

add_executable(main)
target_sources(main PRIVATE main.cpp)

add_library(myLib)
target_link_libraries(main PRIVATE myLib)
if(ENABLE_MODULES)
  target_sources(
    myLib
    PRIVATE myModule_impl.cpp
    PRIVATE FILE_SET
            HEADERS
            FILES
            myHeader1.hpp
            myHeader1.cpp
            myHeader2.hpp
            myHeader2.cpp
    PUBLIC FILE_SET CXX_MODULES FILES myModule.cpp)
  target_compile_definitions(myLib PUBLIC USE_MODULES)
else()
  target_sources(
    myLib
    PRIVATE myHeader1.cpp myHeader2.cpp
    PUBLIC FILE_SET HEADERS FILES myHeader1.hpp myHeader2.hpp)
  target_compile_definitions(
    myLib
    PUBLIC USE_INCLUDES_FROM_STD USE_INCLUDES_FROM_THIS_LIBRARY
           USE_INCLUDES_FROM_OTHER_LIBRARIES USE_NON_INCLUDES_CONTENT
           MODULE_EXPORT=)
  set_target_properties(myLib PROPERTIES CXX_SCAN_FOR_MODULES OFF)
  set_target_properties(main PROPERTIES CXX_SCAN_FOR_MODULES OFF)
endif(ENABLE_MODULES)
