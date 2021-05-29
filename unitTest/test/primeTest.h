// For review purposes only! Does not represent the actual solution!

#ifndef primeTest_h
#define primeTest_h

/* Test File */

/*
   This test file follows (loosely) the Test-Driven Development (TDD) paradigm for unit testing.
   Many testing paradigms exist. What you choose depends on your testing requirements (don't limit yourself).

   Simple TDD unit testing guidelines:
   - Write tests before writing the business logic
   - Each method tests only a single piece of logic
   - Each test has a condition that will certainly fail
   - Run all tests, see what fails
   - Refactor code, run all tests, see what fails
   - If a new test is added, run all tests, see what fails
   - You get the idea...
 */

#include <iomanip>
#include "Prime.h"

using namespace std;

/* headers */

void runAllPrimeTests();

void isPrime_testPrimeNumIsTrue();
void isPrime_testNonPrimeNumIsFalse();
void isPrime_testZeroIsFalse();
void isPrime_testNegativeNumIsFalse();
void isPrime_testNotADigitIsFalse();

void assertThat(string testName, bool result, bool expected);

/* implementation */

void isPrime_testPrimeNumIsTrue(){
    Prime P;
    assertThat ("isPrime_testPrimeNumIsTrue", p.prime(2), true);
}
void isPrime_testNonPrimeNumIsFalse(){
    Prime P;
    assertThat ("isPrime_testNonPrimeNumIsFalse", p.prime(1), false);
}
void isPrime_testZeroIsFalse(){
    Prime P;
    assertThat ("isPrime_testZeroIsFalse", p.prime(0), false);
}
void isPrime_testNegativeNumIsFalse(){
    Prime P;
    assertThat ("isPrime_testNegativeNumIsFalse", p.prime(-1), false);
}
void isPrime_testNotADigitIsFalse(){
    Prime P;
    assertThat ("isPrime_testNotADigitIsFalse", p.prime('A'), false);
}

//evaluator
void assertThat(string testName, bool result, bool expected){
    cout<<setw(25)<<testName<<setw(25);
    if(result==expected)
        cout<"- PASSED"<<endl;
    else
        cout<"- FAILED"<<endl;
}

#endif /* primeTest_h */
