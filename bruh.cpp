#include <iostream>
#include "lib/include/number.h"
extern "C" {

/**
  IDENTIFICATION DIVISION.
       PROGRAM-ID. "call-datadiv-primitives".
       DATA DIVISION
            01 ROOT
                   02 INTS.
                       03 C PICTURE IS 999.
                       03 D PICTURE IS 999.
                   02 DOUBLES
                       03 E PICTURE IS 999V999.
                       03 F PICTURE IS 999V999.
                   02 STRINGS
                       03 G PICTURE IS ZXXVAAA.
                       03 H PICTURE IS XXAAXX.

       PROCEDURE DIVISION.
       MAIN.
        CALL 'bruh' OF helloWorld USING C BY REFERENCE D BY VALUE E BY REFERENCE F BY VALUE G BY REFERENCE H.
   */

void bruh(bstd::Number int1, bstd::Number* int2) {
    std::cout << "call-datadiv-primitives" << std::endl;
    std::cout << int1.value << std::endl;
    std::cout << int1.getSignedValue() << std::endl;
    std::cout << int2 << " " << int2->getSignedValue() << std::endl;
//    std::cout << double1 << std::endl;
//    std::cout << double2 << " " << *double2 << std::endl;
//    std::cout << string1 << " " << string2 << std::endl;
}

int main() {
    bruh(bstd::Number{666, 0, 3, false, true}, new bstd::Number{123, 0, 3, false, true});
}
}