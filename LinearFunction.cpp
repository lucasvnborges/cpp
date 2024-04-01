#include <iostream>

double linearFunction(double a, double b, double x)
{
    return a * x + b;
}

int main()
{
    double a, b, x;

    std::cout << "Enter the value of a: ";
    std::cin >> a;

    std::cout << "Enter the value of b: ";
    std::cin >> b;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    double result = linearFunction(a, b, x);

    std::cout << "The value of the linear function f(x) = ax + b is: " << result << std::endl;

    return 0;
}
