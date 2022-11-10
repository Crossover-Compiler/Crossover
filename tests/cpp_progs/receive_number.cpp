//
// Created by bruh on 10/18/22.
//

#include "../../lib/include/number.h"
#include "iostream"

extern "C" {
    void printNumber(Number*);
}

void printNumber(Number* number) {
    std::cout << number->value << " with scale " << number->scale << std::endl;
}
