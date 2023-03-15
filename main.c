#include <stdlib.h>
#include <stdio.h>

#include "asserts.h"

// simple function only for test
int add(int x, int y)
{
    return x+y;
}

int test__add(void)
{
    MUSTBETRUE(2 == add(1, 1));
    MUSTBETRUE(-5 == add(-2, -3));
    MUSTBETRUE(0 == add(4, -4));
    MUSTBEFALSE(7 == add(8, 1));
    return EXIT_SUCCESS;
}

int main(void)
{
    printf("Hello world!\n");
    return 0;
}