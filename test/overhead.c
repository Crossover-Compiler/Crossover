//
// Created by manzi on 6/12/23.
//
#include <stdio.h>
#include <malloc.h>
#include "../Crossover_bstd_lib/include/number.h"

char** foo() {

    printf("Hello, we will be returning an integer by value! Please enter a value: \r\n");

    char* input = malloc(sizeof(char));
    scanf("%s", input);

    char** res = malloc(sizeof(char*));
    *(res) = input;

    return res;
}

void DO_NOTHING(bstd_number* n) {}

void DO_NOTHING_VALUE(bstd_number n) {}

void DO_NOTHING_PRIM_VALUE(int n) {}

void DO_NOTHING_PRIM_REF(int* n) {}
