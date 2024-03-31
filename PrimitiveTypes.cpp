#include <iostream>

int main()
{
    int Int = 10;
    short Short = 5;
    long Long = 1000000;
    long long LongLong = 1000000000000;
    unsigned int UnsignedInt = 20;
    float Float = 3.14;
    double Double = 3.14159;
    char Char = 'A';
    bool Bool = true;

    std::cout << "int: " << Int << std::endl;
    std::cout << "short: " << Short << std::endl;
    std::cout << "long: " << Long << std::endl;
    std::cout << "long long: " << LongLong << std::endl;
    std::cout << "unsigned int: " << UnsignedInt << std::endl;
    std::cout << "float: " << Float << std::endl;
    std::cout << "double: " << Double << std::endl;
    std::cout << "char: " << Char << std::endl;
    std::cout << "bool: " << std::boolalpha << Bool << std::endl;

    return 0;
}
