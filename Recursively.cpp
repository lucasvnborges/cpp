#include <iostream>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    std::cout << "Enter the value of n to calculate the nth term of the Fibonacci series: ";
    std::cin >> n;

    std::cout << "The " << n << "th term of the Fibonacci series is: " << fibonacci(n) << std::endl;

    return 0;
}
