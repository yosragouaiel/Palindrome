
#include <string>
#include <stdexcept>
#include <iostream>
#include <strings.h>

bool isPalindrome(const std::string& word)
{
   std::string rword(word.rbegin(),word.rend());
    return (strcasecmp(word.c_str(),rword.c_str())==0);
}

#ifndef RunTests
int main()
{
    std::cout << isPalindrome("Deleveled");
}
#endif
