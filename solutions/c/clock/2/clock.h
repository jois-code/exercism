#ifndef CLOCK_H
#define CLOCK_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_STR_LEN sizeof("##:##")

typedef struct {
   char text[MAX_STR_LEN];
} clock_t;

typedef struct{
    long hour,min;
} time;

time get_time(clock_t clock);
clock_t clock_create(int hour, int minute);
clock_t clock_add(clock_t clock, int minute_add);
clock_t clock_subtract(clock_t clock, int minute_subtract);
bool clock_is_equal(clock_t a, clock_t b);

#endif
