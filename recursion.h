#ifndef RECURSION_H
#define RECURSION_H
#include <iostream>
// Your code goes here
class Recursion {
  
    public:
    Recursion()=default;
    ~Recursion()=default;
    void print1toN(int initial, int last);
    bool isPalindrome(std::string str);
    long long power(int base, int exponent=0);
    long long modularExponentiation(int base, int exponent, int mod);
    // compute reverse of a number 
    long long rev(long long n);
    int recursivePower(int base, int exponent);
    int febonacci(int n);
    void print1toN(int number);
    int sumOfDigits(int n);
    int countDigits(int n);
};

#endif // RECURSION_H