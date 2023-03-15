#pragma once

#include <stdlib.h>

#define MUSTBETRUE(_expr)   {if(!_expr) return EXIT_FAILURE;}
#define MUSTBEFALSE(_expr)   {if(_expr) return EXIT_FAILURE;}