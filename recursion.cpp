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