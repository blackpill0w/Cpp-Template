# Cpp-Template
C++20 template.
# Dependenies
Cmake will try to download & compile them, but I am not very good with it, so it might fail :)
- [cmake](https://cmake.org)
# Build
Run this from the root directory of the project.
```bash
mkdir build && cd build && cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_WITH_NIX=OFF .. && cmake --build .
```
## Note
If you have [nix](https://github.com/NixOS/nix) installed remove the `-DBUILD_WITH_NIX=OFF` option
and run `nix-shell` or `nix develop` (depending on whether you're using regular nix shell or flakes) before running cmake.
