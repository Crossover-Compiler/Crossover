# Crossover
An experimental BabyCobol Compiler with C/C++ Interoperability


# Installation
There are two prerequisite dependencies to be installed before you can build this project:
1. ```spdlog```
2. ```llvm```

Aditionally, make sure you have a Java runtime environment (```JRE```) installed.

We provide a short overview for installation of these dependencies on Ubuntu:
1. ```apt install libspdlog-dev```
2. ```bash -c "$(wget -O - https://apt.llvm.org/llvm.sh)"```
You may need root permission for these commands.

Optionally, you may want to install ```clang``` to make use of the compile script included in this project:
```apt install clang```