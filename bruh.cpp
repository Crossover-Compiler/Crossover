#include <iostream>

extern "C" {
#include "./lib/include/number.h"
/**
    IDENTIFICATION DIVISION.
    PROGRAM-ID. "GAP01".
    PROCEDURE DIVISION.
        MAIN.
            CALL 'bruh' OF helloWorld USING 666 BY REFERENCE 500 BY VALUE 333,333 BY REFERENCE 150,150 BY VALUE "Hello" BY REFERENCE "World".
 */

    void bruh(struct bstd::Number int1, struct bstd::Number* int2) {
        std::cout << "bruh." << std::endl;
//        std::cout << "Pointer int1: " << int1 << std::endl;
        std::cout << "Pointer int2: " << int2 << std::endl;

        std::cout << int1.value << std::endl;
        std::cout << int1.scale << std::endl;
        std::cout << int1.length << std::endl;
        std::cout << int1.isSigned << std::endl;
        std::cout << int1.positive << std::endl;
        std::cout << int2 << " " << int2->value << std::endl;
        std::cout << int2 << " " << int2->scale << std::endl;
        std::cout << int2 << " " << int2->length << std::endl;
        std::cout << int2 << " " << int2->isSigned << std::endl;
        std::cout << int2 << " " << int2->positive << std::endl;

        int1.value = 333;
        int2->value = 444;
    }

//    int main() {
//        bruh(bstd::Number{666, 0, 3, false, true}, new bstd::Number{123, 0, 3, false, true});
//    }
}