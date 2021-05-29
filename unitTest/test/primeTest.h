// For review purposes only! Does not represent the actual solution!

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
void dispIsPrime_testMessageIfTrue();
void dispIsPrime_testMessageIfFalse();

template <class T>
void assertThat(string testName, T result, T expected);

/* implementation */

void runAllPrimeTests(){
        isPrime_testPrimeNumIsTrue();
        isPrime_testNonPrimeNumIsFalse();
        isPrime_testZeroIsFalse();
        isPrime_testNegativeNumIsFalse();
        isPrime_testNotADigitIsFalse();
        dispIsPrime_testMessageIfTrue();
        dispIsPrime_testMessageIfFalse();
}

void isPrime_testPrimeNumIsTrue(){
        Prime p;
        assertThat<bool> ("isPrime_testPrimeNumIsTrue", p.isPrime(2), true);
}
void isPrime_testNonPrimeNumIsFalse(){
        Prime p;
        assertThat<bool> ("isPrime_testNonPrimeNumIsFalse", p.isPrime(1), false);
}
void isPrime_testZeroIsFalse(){
        Prime p;
        assertThat<bool> ("isPrime_testZeroIsFalse", p.isPrime(0), false);
}
void isPrime_testNegativeNumIsFalse(){
        Prime p;
        assertThat<bool> ("isPrime_testNegativeNumIsFalse", p.isPrime(-1), false);
}
void isPrime_testNotADigitIsFalse(){
        Prime p;
        assertThat<bool> ("isPrime_testNotADigitIsFalse", p.isPrime('A'), false);
}

void dispIsPrime_testMessageIfTrue(){
        Prime p;
        assertThat<string> ("dispIsPrime_testMessageIfTrue", p.dispIsPrime(2), "This is a prime.");
}

void dispIsPrime_testMessageIfFalse(){
        Prime p;
        assertThat<string> ("dispIsPrime_testMessageIfFalse", p.dispIsPrime(1), "This is not a prime.");
}


//evaluator *bonus*
template <class T>
void assertThat(string testName, T result, T expected){
        cout<<setw(35)<<testName<<setw(20);
        if(result==expected)
                cout<<"- PASSED"<<endl;
        else
                cout<<"- FAILED"<<endl;
}
