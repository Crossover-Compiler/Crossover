#include <stdio.h>
#include "./Crossover_bstd_lib/include/number.h"

/**
IDENTIFICATION DIVISION.
       PROGRAM-ID. "call_literal_ints".
       DATA DIVISION
       PROCEDURE DIVISION.
       MAIN.
           CALL call_literal_ints OF bruh USING -1 AS PRIMITIVE -33 AS STRUCT BY REFERENCE +666 AS PRIMITIVE BY REFERENCE +9999 AS STRUCT.
 */
void call_literal_ints(int int1, struct bstd_Number int2, int *int3, struct bstd_Number* int4) {
    printf("call_literal_ints.bc.\n\n");

    printf("%d\n\n" , int1);

    printf("%lu\n"  , int2.value);
    printf("%lu\n"  , int2.scale);
    printf("%d\n"   , int2.length);
    printf("%d\n"   , int2.isSigned);
    printf("%d\n\n" , int2.positive);

    printf("%p %d\n\n" , int3 , *int3);

    printf("%p %lu\n"   , int4 , int4->value);
    printf("%p %lu\n"   , int4 , int4->scale);
    printf("%p %d\n"    , int4 , int4->length);
    printf("%p %d\n"    , int4 , int4->isSigned);
    printf("%p %d\n\n"  , int4 , int4->positive);
}

/**
IDENTIFICATION DIVISION.
       PROGRAM-ID. "call-datadiv-ints".
       DATA DIVISION
            01 ROOT.
                   02 INTS.
                       03 C PICTURE IS 99.
                       03 D PICTURE IS 9999.
                       03 E PICTURE IS 999999.
                       03 F PICTURE IS 99999999.

       PROCEDURE DIVISION.
       MAIN.
           CALL call_datadiv_ints OF bruh USING C AS PRIMITIVE D AS STRUCT BY REFERENCE E AS PRIMITIVE BY REFERENCE F AS STRUCT.
           DISPLAY C D E F.
 */
void call_datadiv_ints(int int1, struct bstd_Number int2, int* int3, struct bstd_Number* int4) {
    printf("call_datadiv_ints.bc\n\n");

    printf("%d\n\n" , int1);

    printf("%lu\n"  , int2.value);
    printf("%lu\n"  , int2.scale);
    printf("%d\n"   , int2.length);
    printf("%d\n"   , int2.isSigned);
    printf("%d\n\n" , int2.positive);

    printf("%p %d\n\n" , int3 , *int3);

    printf("%p %lu\n"   , int4 , int4->value);
    printf("%p %lu\n"   , int4 , int4->scale);
    printf("%p %d\n"    , int4 , int4->length);
    printf("%p %d\n"    , int4 , int4->isSigned);
    printf("%p %d\n\n"  , int4 , int4->positive);
}

/**
IDENTIFICATION DIVISION.
       PROGRAM-ID. "call_literal_doubles".
       DATA DIVISION
       PROCEDURE DIVISION.
       MAIN.
           CALL call_literal_doubles OF bruh USING -1,1 AS PRIMITIVE -33,33 AS STRUCT BY REFERENCE +666,666 AS PRIMITIVE BY REFERENCE +9999,9999 AS STRUCT.
 */
void call_literal_doubles(double double1, struct bstd_Number double2, double *double3, struct bstd_Number* double4) {
    printf("call_literal_doubles.bc\n\n");

    printf("%f\n\n" , double1);

    printf("%lu\n"  , double2.value);
    printf("%lu\n"  , double2.scale);
    printf("%d\n"   , double2.length);
    printf("%d\n"   , double2.isSigned);
    printf("%d\n\n" , double2.positive);

    printf("%p %f\n\n"   , double3 , *double3);

    printf("%p %lu\n"   , double4 , double4->value);
    printf("%p %lu\n"   , double4 , double4->scale);
    printf("%p %d\n"    , double4 , double4->length);
    printf("%p %d\n"    , double4 , double4->isSigned);
    printf("%p %d\n\n"  , double4 , double4->positive);
}

/**
IDENTIFICATION DIVISION.
       PROGRAM-ID. "call-datadiv-doubles".
       DATA DIVISION
            01 ROOT.
                   02 INTS.
                        03 C PICTURE IS 9V9.
                        03 D PICTURE IS 99V99.
                        03 E PICTURE IS 999V999.

       PROCEDURE DIVISION.
       MAIN.
           CALL call_datadiv_doubles OF bruh USING C AS PRIMITIVE D AS STRUCT BY REFERENCE E AS STRUCT.
           DISPLAY C D E.
 */
void call_datadiv_doubles(double double1, struct bstd_Number double2, struct bstd_Number* double3) {
    printf("call_datadiv_doubles.bc\n\n");

    printf("%f\n\n" , double1);

    printf("%lu\n"  , double2.value);
    printf("%lu\n"  , double2.scale);
    printf("%d\n"   , double2.length);
    printf("%d\n"   , double2.isSigned);
    printf("%d\n\n" , double2.positive);

    printf("%p %lu\n"   , double3 , double3->value);
    printf("%p %lu\n"   , double3 , double3->scale);
    printf("%p %d\n"    , double3 , double3->length);
    printf("%p %d\n"    , double3 , double3->isSigned);
    printf("%p %d\n\n"  , double3 , double3->positive);
}