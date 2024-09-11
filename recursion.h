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
};

#endif // RECURSION_H