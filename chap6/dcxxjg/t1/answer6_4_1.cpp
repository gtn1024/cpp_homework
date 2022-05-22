#include <iostream>
using namespace std;
class base {
public:
  base() { cout << "构造base对象" << endl; }
  virtual void f() { cout << "调用base::f()" << endl; }
};
class derived : public base {
public:
  derived() { cout << "构造derived对象" << endl; }
  void f() { cout << "调用derived::f()" << endl; }
};

int main() {
  base *p;
  derived d;
  d.f();
  p = &d;
  p->f();
  return 0;
}