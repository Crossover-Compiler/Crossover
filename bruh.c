#include <stdio.h>
#include "./Crossover_bstd_lib/include/numutils.h"
#include "./Crossover_bstd_lib/include/picture.h"
#include "./Crossover_bstd_lib/include/picutils.h"

/**
IDENTIFICATION DIVISION.
       PROGRAM-ID. "call_literal_ints".
       DATA DIVISION
       PROCEDURE DIVISION.
       MAIN.
           CALL call_literal_ints OF bruh USING -1 AS PRIMITIVE -33 AS STRUCT BY REFERENCE +666 AS PRIMITIVE BY REFERENCE +9999 AS STRUCT.
 */
void call_literal_ints(int int1, bstd_number int2, int *int3, bstd_number* int4) {
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
void call_datadiv_ints(int int1, bstd_number int2, int* int3, bstd_number* int4) {
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
void call_literal_doubles(double double1, bstd_number double2, double *double3, bstd_number* double4) {
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
                        03 F PICTURE IS 9999V9999.

       PROCEDURE DIVISION.
       MAIN.
           CALL call_datadiv_doubles OF bruh USING C AS PRIMITIVE D AS STRUCT BY REFERENCE E AS PRIMITIVE F AS STRUCT.
           DISPLAY C D E F.
 */
void call_datadiv_doubles(double double1, bstd_number double2, double *double3, bstd_number* double4) {
    printf("call_datadiv_doubles.bc\n\n");

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

void call_datadiv_pictures(char* str, bstd_picture* picture) {
    printf("call_datadiv_pictures.bc\n");

    printf("%s\n", str);
    printf("raw bytes: %s\n", (char*)picture->bytes);
    printf("mask: %s\n", picture->mask);

    printf("returning to bb\n");
}

void call_datadiv_pictures2(char* str, bstd_picture* picture) {
    printf("call_datadiv_pictures.bc 2\n");

    printf("%s\n", str);
    printf("raw bytes: %s\n", (char*)picture->bytes);
    printf("mask: %s\n", picture->mask);

    char b = '8';
    printf("setting byte 2 to: %c\n", b);
    str[2] = b;

    printf("returning to bb\n");
}

void call_datadiv_pictures3(char* str, bstd_picture* picture) {
    printf("call_datadiv_pictures.bc 3\n");

    printf("%s\n", str);
    printf("raw bytes: %s\n", (char*)picture->bytes);
    printf("mask: %s\n", picture->mask);

}

int* global;

void foo(int* a) {
    printf("dereferenced a is %d\n", *a);
    (*a) = 42;
    printf("set dereferenced a to %d\n", *a);
    global = a;
}

/**
 * This _should_ fail; a (so also global) should be freed!
 */
void bar() {
    printf("global address is %p\n", global);
    printf("dereferenced global is %d\n", *global);
}

// TODO: Remove, this is for demo purposes
int i = 0;
void display(bstd_number* double1, bstd_number* double2) {
    if (i == 0) {
        double1->value = 3;             // Results in 0.3         | should be printed as +0.3
        double2->value = 123456;        // Results in 0012.3456   | should be printed as 0012.3456
        i++;
    } else {
        double1->value = 100;           // Results in 10.0        | should be printed as +0.0
        double2->value = 1234567890;    // Results in 123456.7890 | should be printed as 3456.7890
    }
}
