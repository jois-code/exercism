#include "clock.h"

time get_time(clock_t clock)
{
    time t;
    sscanf(clock.text,"%ld:%ld",&t.hour,&t.min);
    return t;
}

clock_t clock_create(int hour, int minute)
{
    clock_t clock;
    int n = floor((float)minute/60);
    hour += n;
    minute %=60;
    hour %= 24;
    hour = (hour<0) ? 24+hour : hour;
    minute = (minute<0) ? 60+minute : minute;
    snprintf(clock.text,MAX_STR_LEN,"%.2d:%.2d",hour,minute);
    return clock;
}

clock_t clock_add(clock_t clock, int minute_add)
{
    time t = get_time(clock);
    int n = floor((float)minute_add/60);
    minute_add %= 60;
    t.hour += n;
    t.min += minute_add;
    return  clock_create(t.hour,t.min);
}

clock_t clock_subtract(clock_t clock, int minute_subtract)
{
    time t = get_time(clock);
    int n = floor((float)minute_subtract/60);
    minute_subtract %= 60;
    t.hour -= n;
    t.min -= minute_subtract;
    return  clock_create(t.hour,t.min);
}

bool clock_is_equal(clock_t a, clock_t b)
{
    time x = get_time(a);
    time y = get_time(b);
    if(x.hour==y.hour && x.min==y.min)
        return true;
    else
        return false;
}
