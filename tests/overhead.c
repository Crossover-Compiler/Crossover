//
// Created by manzi on 6/12/23.
//
#include <stdio.h>
#include <malloc.h>

char** foo() {

    printf("Hello, we will be returning an integer by value! Please enter a value: \r\n");

    char* input = malloc(sizeof(char));
    scanf("%s", input);

    char** res = malloc(sizeof(char*));
    *(res) = input;

    return res;
}
