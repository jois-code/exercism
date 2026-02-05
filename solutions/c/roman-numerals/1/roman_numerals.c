#include "roman_numerals.h"


const numeral nu[] ={
        {"I",1},{"IV",4},{"V",5},{"IX",9}, {"X",10},{"XL",40},{"L",50},{"XC",90},
    {"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000}};

int get_index(unsigned int num){
    int index=0;
    for(int i=0;i<13;i++){
        if(num>=nu[i].val)
            index = i;
    }
    return index;
}

char *to_roman_numeral(unsigned int number){
    char *str = calloc(16,sizeof(char));
    int i=0;
    while(number>0){
        numeral n = nu[get_index(number)];
        int size = strlen(n.sym);
        for(int j=0;j<size;j++){
            str[i++] = n.sym[j];
        }
        number-=n.val;
    }
    return str;
}
