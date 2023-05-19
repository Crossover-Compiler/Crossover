#!/bin/bash

# build library
clang -c --include-directory Crossover_bstd_lib/include/ Crossover_bstd_lib/src/*.c && ar cr libbstd.a *.o
# clean up files
rm -f *.o

