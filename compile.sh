#!/bin/bash

# make output directory
mkdir -p out

# build library
clang++ -c lib/include/* lib/src/* out/lib.o

# build specified files and link against library
clang++ build/output.o out/lib.o "${@}" out/exec

# clean up files
#rm out/lib.o
