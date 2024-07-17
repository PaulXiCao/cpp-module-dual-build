cmake_minimum_required(VERSION 3.28)
project(exportUsing)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(Lib1)
add_subdirectory(Lib2)
add_subdirectory(Lib3)

add_executable(main_importing_Lib1)
target_sources(main_importing_Lib1 PRIVATE main_importing_Lib1.cpp)
target_link_libraries(main_importing_Lib1 PRIVATE lib1)

add_executable(main_importing_Lib3)
target_sources(main_importing_Lib3 PRIVATE main_importing_Lib3.cpp)
target_link_libraries(main_importing_Lib3 PRIVATE lib3)

add_executable(main_including_Lib1)
target_sources(main_including_Lib1 PRIVATE main_including_Lib1.cpp)
target_link_libraries(main_including_Lib1 PRIVATE lib1)

add_executable(main_including_Lib2)
target_sources(main_including_Lib2 PRIVATE main_including_Lib2.cpp)
target_link_libraries(main_including_Lib2 PRIVATE lib2)
