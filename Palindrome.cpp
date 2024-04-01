#include <iostream>
#include <algorithm>
#include <string>

bool isPalindrome(const std::string &str)
{
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main()
{
    std::string str = "anabana";
    if (isPalindrome(str))
    {
        std::cout << str << " is a palindrome." << std::endl;
    }
    else
    {
        std::cout << str << " is not a palindrome." << std::endl;
    }
    return 0;
}
