#include "prime_factors.h"

size_t find_factors(uint64_t n, uint64_t factors[MAXFACTORS]){
    size_t count = 0;
    while (n % 2 == 0) {
        if (count < MAXFACTORS)
            factors[count++] = 2;
        n /= 2;
    }

    for (uint64_t i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            if (count < MAXFACTORS)
                factors[count++] = i;
            n /= i;
        }
    }

    if (n > 1) {
        if (count < MAXFACTORS)
            factors[count++] = n;
    }

    return count;
}
