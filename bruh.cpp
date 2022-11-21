#include <iostream>
extern "C" {

/**
    IDENTIFICATION DIVISION.
    PROGRAM-ID. "GAP01".
    PROCEDURE DIVISION.
        MAIN.
            CALL 'bruh' OF helloWorld USING 666 BY REFERENCE 500 BY VALUE 333,333 BY REFERENCE 150,150 BY VALUE "Hello" BY REFERENCE "World".
 */

void bruh(int int1, int* int2, double double1, double* double2, char* string1, char* string2) {
    std::cout << "bruh." << std::endl;
    std::cout << int1 << std::endl;
    std::cout << int2 << " " << *int2 << std::endl;
    std::cout << double1 << std::endl;
    std::cout << double2 << " " << *double2 << std::endl;
    std::cout << string1 << " " << string2 << std::endl;
}
}