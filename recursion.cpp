#include "recursion.h"

void Recursion::print1toN(int initial, int last) {
    if(initial == last) {
        std::cout << initial << std::endl;
        return ;
    }
    std::cout << initial << std::endl;
    return print1toN(initial+1, last);
}
bool Recursion::isPalindrome(std::string str) {
    if(str.length() <= 1) {
        return true;
    }
    if(str[0] != str[str.length()-1]) {
        return false;
    }
    return isPalindrome(str.substr(1, str.length()-2));
}
long long Recursion::modularExponentiation(int base, int exponent, int mod) {
    
    if(mod == 1) {
        return 0;
    }
    long long result = 1;
    base = base % mod;
    while(exponent > 0) {
        if(exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        exponent = exponent >> 1;
        base = (base * base) % mod;
    }
    return result;
}

// compute reverse of a number 
long long Recursion::rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}

long long Recursion::power(int base, int exponent) {
    /*Given a number and its reverse. Find that number raised to the power of its own reverse.
    Note: As answers can be very large, print the result modulo 109 + 7.
    
        Your Task:You don't need to read input or print anything. You just need to complete the function pow() that takes two parameters N and R denoting the input number and its reverse and returns power of (N to R)mod(109 + 7).
    Expected Time Complexity: O(LogN).
    Expected Auxiliary Space: O(LogN).
    */
   const int MOD = 1000000007;
   exponent = rev(base);

     return modularExponentiation(base, exponent, MOD);
}

int Recursion::recursivePower(int base, int exponent) {
    /*
        You are given two numbers n and p. You need to find np.
        You don't need to read input or print anything. You only need to complete the function RecursivePower() 
        that takes n and p as parameters and returns np.

        Expected Time Complexity: O(p).
        Expected Auxiliary Space: O(p).
    */
    if(exponent == 0) {
        return 1;
    }
    return base * recursivePower(base, exponent-1);
}
int Recursion::febonacci(int n) {
    /*
        You are given a number n. You need to find nth Fibonacci number.
        F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1
        You don't need to read input or print anything. You only need to complete the function fibonacci 
        that takes n as parameters and returns the n-th fibonacci number.

        Expected Time Complexity: O(2n).
        Expected Auxiliary Space: O(N).
    */
  if(n <=1) return n;
    return febonacci(n-1) + febonacci(n-2);
}

void Recursion::print1toN(int number) {
    /*
        Print numbers from 1 to n without the help of loops. 
        You only need to complete the function printNos() that takes N as parameter 
        and prints number from 1 to N recursively.
        Expected Time Complexity: O(n).
        Expected Auxiliary Space: O(n) (Recursive).
    */
    if(number == 0) {
        return ;
    }
    print1toN(number-1);
    std::cout << number << std::endl;
}

int Recursion::sumOfDigits(int n) {
    /*
        Given a number N, find the sum of all the digits of N.
        You don't need to read input or print anything. You only need to complete the function sumOfDigits() 
        that takes N as parameter and returns the sum of digits of N.

        Expected Time Complexity: O(LogN).
        Expected Auxiliary Space: O(LogN) (Recursive).
    */
    if(n == 0) {
        return 0;
    }
    return n%10 + sumOfDigits(n/10);
}

int Recursion::countDigits(int n) {
    /*
        You are given a number n. You need to find the count of digits in n.
        You don't need to read input or print anything. 
        Your task is to complete the function countDigits() that takes n as parameter and returns 
        the count of digits in n.

        Expected Time Complexity: O(Logn).
        Expected Auxiliary Space: O(Logn).
    */
    if(n == 0) {
        return 0;
    }
    return 1 + countDigits(n/10);
}