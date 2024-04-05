#include <iostream>
#include <cmath>

class Roots {
  public:
    double root1;
    double root2;
    bool realRoots;

  Roots(double r1, double r2, bool real) : root1(r1), root2(r2), realRoots(real) {}
};

Roots solveQuadratic(double a, double b, double c) {
  double discriminant = b * b - 4 * a * c;

  if (discriminant < 0) {
    return Roots(0, 0, false);
  } else {
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    return Roots(root1, root2, true);
  }
}

int main() {
  double a = 3.0, b = -6.0, c = 2.0;
  Roots result = solveQuadratic(a, b, c);

  if (result.realRoots) {
    std::cout << "The roots of the equation are " << result.root1 << " and " << result.root2 << std::endl;
  } else {
    std::cout << "The equation has no real roots." << std::endl;
  }

  return 0;
}
