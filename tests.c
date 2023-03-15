#include <stdlib.h>
#include <stdio.h>

// DO NOT MODIFY ME!!

static int total;
static int successful;
static int failed;

int test(void)
{
    if(test__add() == EXIT_SUCCESS)
        successful++;
    else
        failed++;
    total++;
    printf("%d tests applied, %d passed and %d failed\n", total, successful, failed);
    return 0;
}