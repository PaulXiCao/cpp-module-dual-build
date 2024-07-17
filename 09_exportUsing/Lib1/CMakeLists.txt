add_library(lib1)

target_sources(
  lib1
  PRIVATE Lib1_header.cpp
  PUBLIC FILE_SET HEADERS FILES Lib1_header.hpp
  PUBLIC FILE_SET CXX_MODULES FILES Lib1_module.cpp)
