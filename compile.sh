#!/bin/bash

# make output directory
mkdir -p out/lib

# build library
cd out/lib || exit 1
clang++ -c --include-directory ../../lib/include/ ../../lib/src/*.cpp
# make static library
ar cr libbstd.a *.o
cd ../..

# build specified files and link against library
clang++ --for-linker=-Lout/lib/,-lbstd cmake-build-debug/output.o "${@}" -o out/exec

# clean up files
#rm out/lib.o
