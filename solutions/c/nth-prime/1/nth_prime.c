#include "nth_prime.h"

bool isPrime(uint32_t n){
    if(n==2) return true;
    if(n==1) return false;
    for(uint32_t i =2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

uint32_t nth(uint32_t n){
    uint32_t temp = 0;
    for(uint32_t i=2;;i++){
        if(n==0) return temp;
        if(isPrime(i)){
            temp = i;
            n--;
        }
    }
    return 0;
}
