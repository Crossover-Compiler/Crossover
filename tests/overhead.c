//
// Created by manzi on 6/12/23.
//
#include "../Crossover_bstd_lib/include/number.h"
#include <stdio.h>
#include <malloc.h>

bstd_number foo() {

    printf("Hello, we will be returning a number by value \r\n");

    bstd_number z;// = malloc(sizeof(bstd_number));
    z.scale = 0;
    z.length = 2;
    z.isSigned = 0;
    z.positive = 1;
    z.value = 42;

    return z;
}
