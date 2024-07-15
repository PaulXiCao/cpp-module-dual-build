cmake_minimum_required(VERSION 3.28)
project(duplicatedExternalImports)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_MODULES "Enable modules for all libraries" ON)
if(ENABLE_MODULES)
  add_compile_definitions(USE_MODULES)
else()
  add_compile_definitions(
    USE_INCLUDES_FROM_STD USE_INCLUDES_FROM_THIS_LIBRARY
    USE_INCLUDES_FROM_OTHER_LIBRARIES USE_NON_INCLUDES_CONTENT MODULE_EXPORT=)
  set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
endif()

add_subdirectory(Lib1)
add_subdirectory(Lib2)

add_executable(main)
target_sources(main PRIVATE main.cpp)
target_link_libraries(main PRIVATE lib1 lib2)
