#include "Girl.h"
#include <iostream>
#include <string>

using namespace std;

Girl::Girl(string name, int age) {
  this->name = name;
  this->age = age;
  cout << "Girl(" << name << ", " << age << ") 构造器调用" << endl;
}

Girl::~Girl() {
  cout << "Girl(" << name << ", " << age << ") 析构函数调用" << endl;
}

void Girl::print() {
  cout << "Girl(name=" << this->name << ", age=" << age << ")" << endl;
}

void Girl::visitBoy(Boy &boy) {
  cout << "Girl.visitBoy "
       << "Boy(name=" << boy.name << ", age=" << boy.age << ")" << endl;
}
