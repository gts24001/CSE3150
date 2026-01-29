// File: isPrime.cpp

#include <iostream>
#include <cmath>
#include "isPrimeFunction.h"

using namespace std;


bool isPrimeInteger(int pTest) {

    if (pTest <= 1) {
        return false;
    }

    for (int i = 2; i < pTest; i++) {
        if (pTest % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int testForPrime;

    cout << "Enter an integer" << endl;
    cin >> testForPrime;


    if (isPrimeInteger(testForPrime)) {
        cout << testForPrime << " is a prime number." << endl;
    } else {
        cout << testForPrime << " is not a prime number." << endl;
    }

    
    return 0;
}