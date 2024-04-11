#include <iostream>
#include <vector>

int main() {
  std::vector<double> numbers = {10.1, 20.2, 30.3, 40.4};
  double divisor = 2.3;

  for (auto &num : numbers) {
    num /= divisor;
  }

  std::cout << "Numbers in vector after division: ";

  for (const auto &num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
