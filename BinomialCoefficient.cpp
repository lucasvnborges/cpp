#include <iostream>

long long factorial(int n) {
  long long value = 1;

  for (int i = 2; i <= n; i++) {
    value *= i;
  }

  return value;
}

long long binomialCoefficient(int n, int k) {
  long long binomial =
      factorial(n) / (factorial(k) * factorial(n - k));

  return binomial;
}

int main() {
  int n = 5, k = 3;

  long long result = binomialCoefficient(n, k);

  std::cout << "The binomial coefficient C(" << n << ", " << k << ") is: " << result << std::endl;

  return 0;
}
