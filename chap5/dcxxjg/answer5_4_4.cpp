#include <iostream>
using namespace std;
class X {
public:
  void f() { cout << "X::f() executing\n"; }
};
class Y : public X {
public:
  void f() { cout << "Y::f() executing\n"; }
};
int main() {
  X x;
  Y y;
  X *p = &x;
  p->f();
  p = &y;
  p->f();
  y.f();
  return 0;
}