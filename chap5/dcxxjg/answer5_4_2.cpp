#include <iostream>
using namespace std;
class X {
public:
  X() { cout << "X::X() constructor execting\n"; }
  ~X() { cout << "X::~X() destructor execting\n"; }
};
class Y : public X {
public:
  Y() { cout << "Y::Y() constructor execting\n"; }
  ~Y() { cout << "Y::~Y() destructor execting\n"; }
};
class Z : public Y {
public:
  Z() { cout << "Z::Z() constructor execting\n"; }
  ~Z() { cout << "Z::~Z() destructor execting\n"; }
};
int main() {
  Z z;
  return 0;
}