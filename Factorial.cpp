#include <iostream>

long long factorial(int n) {
  long long value = 1;

  for (int i = 2; i <= n; i++) {
    value *= i;
  }

  return value;
}

int main() {
  int n;

  std::cout << "Enter a positive integer: ";
  std::cin >> n;

  long long result = factorial(n);

  std::cout << "The factorial of " << n << " is: " << result << std::endl;

  return 0;
}
