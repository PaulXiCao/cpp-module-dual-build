# with modules
```bash
cmake -B build_modules -G Ninja
ninja -C build_modules
```

# without modules (aka only header + impl)
```bash
cmake -B build_modules -G Ninja -D ENABLE_MODULES=OFF
ninja -C build_modules
```

# Resources/Ideas

- switch by CMake option
- switch by preprocessor macro
- non-intrusive for headers: create thin wrapper modules
- intrusive for headers: insert MY_EXPORT macro into header to create modules out of them
- look into fmt
    - Daniela-E explains how she transformed fmt to use modules (alongside header build): 
        https://www.reddit.com/r/cpp/comments/1busseu/comment/kxvfayf