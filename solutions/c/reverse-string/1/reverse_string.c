#include "reverse_string.h"

char *reverse(const char *value)
{
    int size = strlen(value), i,x = 0;
    char *rev = malloc(sizeof(char)*size);
    for(i=size-1;i>=0;i--)
        rev[x++] = value[i];
    return rev;
}

