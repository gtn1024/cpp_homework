#include "Point.h"
#include <ostream>
using namespace std;

Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}

Point Point::operator++() {
  x++;
  y++;
  return *this;
}

Point Point::operator-(const Point &p) const { return Point(x - p.x, y - p.y); }

Point Point::operator+(const Point &p) { return Point(x + p.x, y + p.y); }

Point Point::operator+(const double &d) { return Point(x + d, y + d); }

ostream &operator<<(ostream &os, const Point &p) {
  os << "(" << p.x << "," << p.y << ")";
  return os;
}
