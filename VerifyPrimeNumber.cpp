#include <cmath>
#include <iostream>

bool isPrime(int num) {
  if (num <= 1)
    return false;
  if (num == 2)
    return true;
  if (num % 2 == 0)
    return false;
  for (int i = 3; i <= sqrt(num); i += 2) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  if (isPrime(num))
    std::cout << num << " is a prime number.\n";
  else
    std::cout << num << " is not a prime number.\n";
  return 0;
}
