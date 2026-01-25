#ifndef ROMAN_NUMERALS_H
#define ROMAN_NUMERALS_H

#include <stdlib.h>
#include <string.h>

typedef struct{
    char *sym;
    unsigned int val;
}numeral;

int get_index(unsigned int num);
char *to_roman_numeral(unsigned int number);

#endif
