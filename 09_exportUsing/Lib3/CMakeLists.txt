add_library(lib3)

target_sources(
  lib3
  PUBLIC FILE_SET CXX_MODULES FILES Lib3_module.cpp)

target_link_libraries(lib3 PRIVATE lib1)
