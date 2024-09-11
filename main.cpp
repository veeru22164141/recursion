#include "recursion.h"
int main() {
    Recursion r;
    r.print1toN(1, 10);
    std::cout << r.isPalindrome("madam") << std::endl;
    std::cout << r.power(12) << std::endl;
    std::cout << r.recursivePower(2, 3) << std::endl;
    std::cout <<"febonacci(5) : " <<r.febonacci(5) << std::endl;
    std::cout << "print1toN(5) : " ;
     r.print1toN(5);
     std::cout<<std::endl;
    std::cout << "sumOfDigits(1234) : " << r.sumOfDigits(1234) << std::endl;
    std::cout << "countDigits(1234) : " << r.countDigits(1234) << std::endl;

    return 0;
}