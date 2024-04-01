#include <iostream>

double ruleOfThree(double a, double b, double c)
{
    return (b * c) / a;
}

int main()
{
    double a = 2.0;
    double b = 3.0;
    double c = 4.0;

    std::cout << "The result of the rule of three is: " << ruleOfThree(a, b, c) << std::endl;

    return 0;
}
