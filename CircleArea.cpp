#include <cmath>
#include <iostream>

double calculateCircleArea(double diameter) {
  double radius = diameter / 2.0;
  return M_PI * pow(radius, 2);
}

int main() {
  double diameter = 10.0;
  double area = calculateCircleArea(diameter);

  std::cout << "The area of the circle with diameter " << diameter << " is " << area << std::endl;

  // result -> The area of the circle with diameter 10 is 78.5398
  return 0;
}
