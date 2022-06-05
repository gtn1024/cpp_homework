#ifndef POINT
#define POINT
#include <iostream>
using namespace std;

class Point {
private:
  double x, y;

public:
  Point(double x = 0, double y = 0);
  Point operator++(); // 前自增
  Point operator-(const Point &p) const;
  Point operator+(const Point &p);
  Point operator+(const double &d);
  friend ostream &operator<<(ostream &os, const Point &p);
};

#endif
