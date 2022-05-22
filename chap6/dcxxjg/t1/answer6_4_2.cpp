#include <iostream>
using namespace std;

class base1 {
public:
  virtual void who() { cout << "this is the class of base1!" << endl; }
};

class base2 {
public:
  void who() { cout << "this is the class of base2!" << endl; }
};

class derive : public base1, public base2 {
public:
  void who() { cout << "this is the class of derive!" << endl; }
};

int main() {
  base1 obj1, *ptr1;
  base2 obj2, *ptr2;
  derive obj3;
  ptr1 = &obj1;
  ptr1->who();
  ptr2 = &obj2;
  ptr2->who();
  ptr1 = &obj3;
  ptr1->who();
  ptr2 = &obj3;
  ptr2->who();
  return 0;
}
