#include <stdio.h>
/**
    IDENTIFICATION DIVISION.
    PROGRAM-ID. "GAP01".
    PROCEDURE DIVISION.
        MAIN.
            CALL 'bruh' OF helloWorld USING 666 BY REFERENCE 500 BY VALUE 333,333 BY REFERENCE 150,150 BY VALUE "Hello" BY REFERENCE "World".
 */

void bruh(int int1, int* int2, double double1, double* double2, char* string1, char* string2) {
    printf("bruh\n");
    printf("%i\n" ,int1);
    printf("%p %i\n", int2, *int2);
//    printf("%i\n", *int2);
    printf("%f\n", double1);
    printf("%p %f\n", double2, *double2);
//    printf("%f\n", *double2);
    printf("%s %s", string1, string2);
}
