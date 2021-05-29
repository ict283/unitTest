// For review purposes only! Does not represent the actual solution!

#ifndef Prime_h
#define Prime_h

#include <ctype.h>

/*
   A prime is:
   - a number that is divisible only by itself and 1
   - non-negative
   - not 0 or 1
 */

class Prime
{
public:
    Prime();
    ~Prime();
    bool isPrime(const int n);
};
#endif /* Prime_h */
