#!/bin/bash

# clean build
make clean

# clean unix cmake
rm -rf bin/CMakeFiles/
rm -rf build/

# clean binaries
rm -f bin/*

# clean rel_bin
rm -rf rel_bin/linux/
rm -rf rel_bin/windows/