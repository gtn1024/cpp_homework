#include "Point.h"
#include <iostream>
using namespace std;
int main() {
  Point pt1(10.5, 20.8), pt2(-5.3, 18.4), pt3;
  cout << "original pt1,pt2,pt3 are:\n";
  cout << pt1 << endl << pt2 << endl << pt3 << endl;
  pt3 = pt1 + 100.8;
  cout << "after pt3=pt1+100.8, pt3 is:" << pt3 << endl;
  pt3 = pt1 + pt2;
  cout << "after pt3=pt1+pt2, pt3 is:" << pt3 << endl;
  pt3 = ++pt1;
  ++pt2;
  cout << "after ++ pt1,pt2,pt3 are:\n";
  cout << pt1 << endl << pt2 << endl << pt3 << endl;
  pt3 = pt1 - pt2;
  cout << "after pt3=pt1-pt2, pt3 is:" << pt3 << endl;
  return 0;
}
