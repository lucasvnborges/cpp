#include <iostream>

double simpleInterest(double P, double R, double T)
{
    return (P * R * T) / 100;
}

int main()
{
    double P, R, T;

    std::cout << "Enter the principal amount (P): ";
    std::cin >> P;

    std::cout << "Enter the rate of interest (R) in %: ";
    std::cin >> R;

    std::cout << "Enter the time period (T) in years: ";
    std::cin >> T;

    double interest = simpleInterest(P, R, T);

    std::cout << "The simple interest is: " << interest << std::endl;

    return 0;
}