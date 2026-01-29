// File: isPrimeFunction.h

#ifndef ISPRIMEFUNCTION_H
#define ISPRIMEFUNCTION_H

bool isPrimeInteger(int pTest);


bool isPrimeInteger(int pTest) {
    bool isPrime = true;

    if (pTest <= 1) {
    return false;
    }

    for (int i = 2; i < pTest; i++) {
        if (pTest % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

#endif

// Run Command: g++ -std=c++17 isPrime.cpp -o isPrime
// Run Command for Tests: g++ -std=c++17 testIsPrimeInteger.cpp -o testIsPrime && ./testIsPrime