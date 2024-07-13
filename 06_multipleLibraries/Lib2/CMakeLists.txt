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
  target_compile_definitions(
    lib2
    PUBLIC USE_INCLUDES_FROM_STD USE_INCLUDES_FROM_THIS_LIBRARY
           USE_INCLUDES_FROM_OTHER_LIBRARIES USE_NON_INCLUDES_CONTENT
           MODULE_EXPORT=)
  set_target_properties(lib2 PROPERTIES CXX_SCAN_FOR_MODULES OFF)
endif(ENABLE_MODULES)

target_link_libraries(lib2 PRIVATE lib1)
