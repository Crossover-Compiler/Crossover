# crossover
An experimental BabyCobol Compiler with C interoperability


# Installation
There are two prerequisite dependencies to be installed before you can build this project:
1. ```spdlog```
2. ```llvm```

Aditionally, make sure you have a Java runtime environment (```JRE```) installed.

We provide a short overview for installation of these dependencies on Ubuntu:
```
apt install libspdlog-dev
```
```
bash -c "$(wget -O - https://apt.llvm.org/llvm.sh)"
```

```
apt install clang
```
You may need root permission for these commands.


# Building
To build the crossover compiler, you can simply run cmake:
```
cmake .
```

# The BabyCobol standard library

The BabyCobol standard library (bstd) is used both during compilation and runtime and it is required to be present in the same folder as the Crossover executable. To compile the bstd library simply run ```compile_bstd.sh``` and move the .a file to your output folder.
 
# Using the compiler

```
USAGE: crossover babycobolsourcefile [options]

Options:

--external objectfiles... : Allows user to supply compiler with .o files.

-generate-structs : Generates c structs from babycobol record types.

-not-main : If this option is present the babycobol procedure is compiled as "procedureDivision". If it is not present the procedure is compiled as "main".
```


