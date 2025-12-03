#include "binary.h"

int convert(const char *input){
    int sum=0;
    int len = strlen(input);
    for(int i=0;input[i]!='\0';i++)
    {
        char c = input[i];
        if(c=='0' || c=='1')
        {
            if(c=='1')
                sum += (int)pow(2,len-i-1);
        }
        else
            return -1;
    }
    return sum;
}
