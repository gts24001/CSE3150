#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 

#include "./include/doctest.h" 

#include "isPrimeFunction.h"

TEST_CASE("testing the isPrimeInteger function") { 

  CHECK(isPrimeInteger(2) == true);   
  CHECK(isPrimeInteger(3) == true); 
  CHECK(isPrimeInteger(4) == false); 
  CHECK(isPrimeInteger(5) == true); 
  CHECK(isPrimeInteger(10) == false); 
  CHECK(isPrimeInteger(13) == true); 
  CHECK(isPrimeInteger(25) == false); 
  CHECK(isPrimeInteger(29) == true); 
  CHECK(isPrimeInteger(1) == false); 
  CHECK(isPrimeInteger(0) == false); 
  CHECK(isPrimeInteger(-7) == false); 

}