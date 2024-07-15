add_library(lib2)

if(ENABLE_MODULES)
  target_sources(
    lib2
    PRIVATE Lib2_module_impl.cpp
    PRIVATE FILE_SET
            HEADERS
            FILES
            Lib2_header1.hpp
            Lib2_header1.cpp
            Lib2_header2.hpp
            Lib2_header2.cpp
    PUBLIC FILE_SET CXX_MODULES FILES Lib2_module.cpp)
  target_compile_definitions(lib2 PRIVATE USE_MODULES)
else()
  target_sources(
    lib2
    PRIVATE Lib2_header1.cpp Lib2_header2.cpp
    PUBLIC FILE_SET HEADERS FILES Lib2_header1.hpp Lib2_header2.hpp)
endif(ENABLE_MODULES)

target_link_libraries(lib2 PRIVATE lib1)
