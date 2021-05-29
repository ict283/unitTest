// For review purposes only! Does not represent the actual solution!

#include "Prime.h"

Prime::Prime(){
        //empty
}

Prime::~Prime(){
        //empty
}

bool Prime::isPrime(const int n){

        //Got this off the internet, don't know if it works
        if(isdigit(n)!=0) {
                return false;
        }
        if(n==0||n==1||n<0) {
                return false;
        }else{
                for(int i =2; i<= n/2; ++i) {
                        if(n%i==0) {
                                return false;
                        }
                }
        }
        return true;
}

string Prime::dispIsPrime(const int n){

        if(isPrime(n))
                return "This is a prime.";
        else
                return "This is not a prime.";
}
