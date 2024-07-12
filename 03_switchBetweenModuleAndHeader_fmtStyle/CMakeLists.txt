cmake_minimum_required(VERSION 3.28)
project(fmtStyle)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_MODULES "Enable modules" ON)

add_executable(main)

if(ENABLE_MODULES)
  target_sources(
    main
    PRIVATE main.cpp
    PRIVATE FILE_SET HEADERS FILES myHeader.cpp myHeader.hpp
    PRIVATE FILE_SET CXX_MODULES FILES myModule.cpp)
  target_compile_definitions(main PRIVATE USE_MODULES)
else()
  target_sources(
    main
    PRIVATE main.cpp myHeader.cpp
    PRIVATE FILE_SET HEADERS FILES myHeader.hpp)
  set_target_properties(main PROPERTIES CXX_SCAN_FOR_MODULES OFF)
endif(ENABLE_MODULES)
