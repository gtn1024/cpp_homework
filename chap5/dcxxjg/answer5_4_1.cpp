#include <iostream>
using namespace std;
class A {
public:
  A() { cout << 'A'; }
};
class B {
public:
  B() { cout << 'B'; }
};
class C : public A {
public:
  C() { cout << 'C'; }
};
class D : public A, public B {
public:
  D() { cout << 'D'; }
};
class E : public B, public virtual C {
public:
  D d;
  E() { cout << 'E'; }
};
class F : public virtual C, public D, public E {
public:
  C c, d;
  E e;
  F() { cout << 'F'; }
};
int main() {
  A a;
  cout << '\n';
  B b;
  cout << '\n';
  C c;
  cout << '\n';
  D d;
  cout << '\n';
  E e;
  cout << '\n';
  F f;
  cout << '\n';
  return 0;
}