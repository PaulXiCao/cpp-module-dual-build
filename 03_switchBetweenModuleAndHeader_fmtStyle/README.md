# with modules 
## gcc
```bash
cmake -B build_modules_gcc -G Ninja
ninja -C build_modules_gcc
```

## clang
```bash
cmake -B build_modules_clang -G Ninja -D CMAKE_C_COMPILER="/usr/bin/clang" -D CMAKE_CXX_COMPILER="/usr/bin/clang++"
ninja -C build_modules_clang
```

# without modules (aka only header + impl)
```bash
cmake -B build_headers -G Ninja -D ENABLE_MODULES=OFF
ninja -C build_headers
```
