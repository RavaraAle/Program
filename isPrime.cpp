//
// Created by gliol on 05/03/2020.
//

#include <cmath>
#include "isPrime.h"

bool isPrimeFor(int n) {
    if (n % 2 == 0)
        return n == 2; // Two is the only even prime number

    n = abs(n);

    auto limit = (int)floor(sqrt((double)n));
    if (n == limit * limit)
        return false; // Perfect square

    for (unsigned long p = 3; p <= limit; p += 2)
        if (n % p == 0)
            return false;

    return true;
}



bool isPrimeWhile(int n) {
    if (n % 2 == 0) {
        return n == 2; //Two is the only even prime number
    }

    int limit = (int)floor(sqrt((float)n));
    if (n == limit * limit)
        return false; //Perfect square

    int p = 3; // newStuff branch
    while (p <= limit && n % p != 0)
        p += 2;

	return p >= limit;

}

