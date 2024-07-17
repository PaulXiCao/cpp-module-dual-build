add_library(lib2)

target_sources(
  lib2
  PRIVATE Lib2_header.cpp
  PUBLIC FILE_SET HEADERS FILES Lib2_header.hpp)

target_link_libraries(lib2 PRIVATE lib1)
