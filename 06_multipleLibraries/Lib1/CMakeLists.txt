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
  target_compile_definitions(
    lib1
    PUBLIC USE_INCLUDES_FROM_STD USE_INCLUDES_FROM_THIS_LIBRARY
           USE_INCLUDES_FROM_OTHER_LIBRARIES USE_NON_INCLUDES_CONTENT
           MODULE_EXPORT=)
  set_target_properties(lib1 PROPERTIES CXX_SCAN_FOR_MODULES OFF)
endif(ENABLE_MODULES)
