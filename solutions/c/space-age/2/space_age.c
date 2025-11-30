#include "space_age.h"

uint64_t const year = 31557600;
const float ratio[] = {0.2408467,0.61519726,1.0,1.8808158,11.862615,29.447498,84.016846,164.79132};

float age(planet_t planet, int64_t seconds)
{
    if(planet>=0 && planet <=7)
        return (seconds/year)/ratio[planet];
    else
        return -1;
}
