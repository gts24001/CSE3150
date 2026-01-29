// File: testIsPrimeInteger.cpp

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 

#include "../include/doctest.h" 

#include "isPrimeFunction.h"

TEST_CASE("Edge cases") {
    CHECK(isPrimeInteger(-10) == false);
    CHECK(isPrimeInteger(-1) == false);
    CHECK(isPrimeInteger(0) == false);
    CHECK(isPrimeInteger(1) == false);
}

TEST_CASE("Small prime numbers") {
    CHECK(isPrimeInteger(2) == true);
    CHECK(isPrimeInteger(3) == true);
    CHECK(isPrimeInteger(5) == true);
    CHECK(isPrimeInteger(7) == true);
}

TEST_CASE("Composite numbers") {
    CHECK(isPrimeInteger(4) == false);
    CHECK(isPrimeInteger(6) == false);
    CHECK(isPrimeInteger(9) == false);
    CHECK(isPrimeInteger(15) == false);
}

TEST_CASE("Larger prime numbers") {
  CHECK(isPrimeInteger(29) == true);
  CHECK(isPrimeInteger(97) == true);
  CHECK(isPrimeInteger(100) == false);
  CHECK(isPrimeInteger(121) == false);
}