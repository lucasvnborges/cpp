#include <iostream>

// In a box, there are 5 red balls, 3 blue balls, and 2 green balls.
// If a ball is drawn randomly, what is the probability that it is a blue ball?
int main() {
  int totalBalls = 5 + 3 + 2; // total number of balls in the box
  int blueBalls = 3;          // number of blue balls

  double probability = (double)blueBalls / totalBalls;

  std::cout << "The probability of drawing a blue ball is " << probability << std::endl;

  return 0;
}
