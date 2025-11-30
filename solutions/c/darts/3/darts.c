#include "darts.h"

float distance(coordinate_t c)
{
    return sqrt(c.x*c.x + c.y*c.y);
}

uint8_t score(coordinate_t c)
{
    float d = distance(c);
    if(d>10)
        return 0;
    else if(d<=10 && d>5)
        return 1;
    else if(d<=5 && d>1)
        return 5;
    else
        return 10;
}
