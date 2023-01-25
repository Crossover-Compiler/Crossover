#include <stdio.h>

#include "./Crossover_bstd_lib/include/number.h"
/**
    IDENTIFICATION DIVISION.
    PROGRAM-ID. "GAP01".
    PROCEDURE DIVISION.
        MAIN.
            CALL 'bruh' OF helloWorld USING 666 BY REFERENCE 500 BY VALUE 333,333 BY REFERENCE 150,150 BY VALUE "Hello" BY REFERENCE "World".
 */

void bruh(struct bstd_Number int1, struct bstd_Number* int2) {
    printf("bruh.\n");
    printf("Pointer int2: %p\n", int2);
    printf("%lu\n",int1.value);
    printf("%lu\n",int1.scale);
    printf("%d\n",int1.length);
    printf("%d\n",int1.isSigned);
    printf("%d\n",int1.positive);

    printf("%p %lu\n",int2 ,int2->value);
    printf("%p %lu\n",int2,int2->scale);
    printf("%p %d\n",int2,int2->length);
    printf("%p %d\n",int2,int2->isSigned);
    printf("%p %d\n",int2,int2->positive);


    int1.value = 333;
    int2->value = 444;
    }
