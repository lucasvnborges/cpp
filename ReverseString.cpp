#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string str = "string";
    std::reverse(str.begin(), str.end());
    std::cout << "Reversed string is: " << str << std::endl;
    return 0;
}
