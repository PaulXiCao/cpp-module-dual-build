.PHONY: all clean build_gcc build_clang

all: build_gcc build_clang 

build_gcc:
	cmake -G Ninja -B build_gcc
	ninja -C build_gcc

build_clang:
	cmake -G Ninja -B build_clang -D CMAKE_C_COMPILER="clang" -D CMAKE_CXX_COMPILER="clang++"
	ninja -C build_clang

clean:
	rm -rf build*