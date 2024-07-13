add_library(lib1)

if(ENABLE_MODULES)
  target_sources(
    lib1
    PRIVATE Lib1_module_impl.cpp
    PRIVATE FILE_SET
            HEADERS
            FILES
            Lib1_header1.hpp
            Lib1_header1.cpp
            Lib1_header2.hpp
            Lib1_header2.cpp
    PUBLIC FILE_SET CXX_MODULES FILES Lib1_module.cpp)
  target_compile_definitions(lib1 PRIVATE USE_MODULES)
else()
  target_sources(
    lib1
    PRIVATE Lib1_header1.cpp Lib1_header2.cpp
    PUBLIC FILE_SET HEADERS FILES Lib1_header1.hpp Lib1_header2.hpp)
endif(ENABLE_MODULES)
