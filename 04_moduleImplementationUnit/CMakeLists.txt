cmake_minimum_required(VERSION 3.28)
project(seperateModuleImpl)

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
    PRIVATE FILE_SET HEADERS FILES myHeader.cpp myHeader.hpp
    PUBLIC FILE_SET CXX_MODULES FILES myModule.cpp)
  target_compile_definitions(myLib PUBLIC USE_MODULES)
else()
  target_sources(
    myLib
    PRIVATE myHeader.cpp
    PUBLIC FILE_SET HEADERS FILES myHeader.hpp)
  target_compile_definitions(
    myLib PUBLIC USE_STD_INCLUDES USE_EXCEPT_NON_STD_INCLUDES MODULE_EXPORT=)
  set_target_properties(myLib PROPERTIES CXX_SCAN_FOR_MODULES OFF)
  set_target_properties(main PROPERTIES CXX_SCAN_FOR_MODULES OFF)
endif(ENABLE_MODULES)
