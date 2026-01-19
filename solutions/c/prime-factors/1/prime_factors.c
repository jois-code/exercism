#include "prime_factors.h"

int checkPrime(uint64_t num){
    for(uint64_t i =2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}


size_t find_factors(uint64_t n, uint64_t factors[MAXFACTORS]){
    size_t x = 0;
    for(uint64_t i=2;i<=n;i++){
        if(checkPrime(i)==1){
            while(n%i==0){
                factors[x++] = i;
                n/=i;
            }
        }
    }
    return x;
}
