#include <iostream>

int nextNumberInSequence(int n) {
  return (n * n) + 1;
}

// Given sequence: 2, 5, 10, 17, 26, ...
// Squares of natural numbers 1ˆ2, 2ˆ2, 3ˆ3...
// Sum 1 in result and get next number of sequence
int main() {
  int n = 6;
  int nextTerm = nextNumberInSequence(n);

  std::cout << "The next number in sequence is: " << nextTerm << std::endl;

  return 0;
}
