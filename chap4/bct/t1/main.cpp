#include <cmath>
#include <iostream>
using namespace std;
class Point {
private:
  double x, y;

public:
  Point(double a, double b) : x(a), y(b) {}
  Point(Point &p) {
    x = p.x;
    y = p.y;
  }
  double getX() { return x; }
  double getY() { return y; }
};
class Line {
private:
  Point p1, p2;
  double length;

public:
  Line(Point a, Point b) : p1(a), p2(b) {
    length = sqrt((p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) +
                  (p1.getY() - p2.getY()) * (p1.getY() - p2.getY()));
  }
  double getLength() { return length; }
};
int main() {
  Point p1(1, 2), p2(3, 4);
  Line l1(p1, p2);
  cout << l1.getLength() << endl;
  return 0;
}