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

using namespace std;

/* headers */

void runAllPrimeTests();

void isPrime_testPrimeNum();
void isPrime_testNonPrimeNum();
void isPrime_testZero();
void isPrime_testNegativeNum();
void isPrime_testNotADigit();

void assertThat(string testName, bool result, bool expected);

/* implementation */



//evaluator
void assertThat(string testName, bool result, bool expected){
    cout<<setw(15)<<testName<<setw(15);
    if(result==expected)
        cout<"- PASSED"<<endl;
    else
        cout<"- FAILED"<<endl;
}

#endif /* primeTest_h */
