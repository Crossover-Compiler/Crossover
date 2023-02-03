#include <stdio.h>

#include "./Crossover_bstd_lib/include/number.h"
/**
    IDENTIFICATION DIVISION.
    PROGRAM-ID. "GAP01".
    PROCEDURE DIVISION.
        MAIN.
            CALL 'bruh' OF helloWorld USING 666 BY REFERENCE 500 BY VALUE 333,333 BY REFERENCE 150,150 BY VALUE "Hello" BY REFERENCE "World".
 */

void bruh(double double1, struct bstd_Number double2, double* double3, struct bstd_Number* double4) {
    printf("bruh.\n");
    printf("Pointer double2: %p\n", double3);
    printf("Pointer double4: %p\n\n", double4);


    printf("%f\n\n",double1);

    printf("%lu\n",double2.value);
    printf("%lu\n",double2.scale);
    printf("%d\n",double2.length);
    printf("%d\n",double2.isSigned);
    printf("%d\n\n",double2.positive);


    printf("%f\n\n",*double3);

    printf("%p %lu\n",double4,double4->value);
    printf("%p %lu\n",double4,double4->scale);
    printf("%p %d\n",double4,double4->length);
    printf("%p %d\n",double4,double4->isSigned);
    printf("%p %d\n",double4,double4->positive);


//    int1.value = 333;
//    int2->value = 444;
    }
