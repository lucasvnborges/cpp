#include <iostream>

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            std::cout << t1 << ", ";
            continue;
        }

        if (i == 2)
        {
            std::cout << t2 << ", ";
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        if (i < n)
        {
            std::cout << nextTerm << ", ";
        }
        else
        {
            std::cout << nextTerm;
        }
    }
}

int main()
{
    int n = 11;
    std::cout << "Fibonacci sequence up to " << n << " terms: ";
    fibonacci(n);
    return 0;
}
