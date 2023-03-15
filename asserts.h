#pragma once

#include <stdlib.h>

#define PRINT_ERROR printf("failed in %s, line %d\n", __FILE__, __LINE__)

#define MUSTBETRUE(_expr)   {if(!_expr) {PRINT_ERROR; return EXIT_FAILURE;}}
#define MUSTBEFALSE(_expr)   {if(_expr) {PRINT_ERROR; return EXIT_FAILURE;}}