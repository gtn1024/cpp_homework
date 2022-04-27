#include <iostream>

using namespace std;

class Circle {
  const double PI;
  double r;

public:
  Circle(double rr) : PI(3.14) { r = rr; }
  double getArea() const { return PI * r * r; }
};

int main() {
  Circle c1(2);
  const Circle c2(3);
  cout << c1.getArea() << endl;
  cout << c2.getArea() << endl;
  return 0;
}