#include "Boy.h"
#include <iostream>
#include <string>

using namespace std;

Boy::Boy(string name, int age) {
  this->name = name;
  this->age = age;
  cout << "Boy(" << name << ", " << age << ") 构造器调用" << endl;
}

Boy::~Boy() {
  cout << "Boy(" << name << ", " << age << ") 析构函数调用" << endl;
}

void Boy::print() {
  cout << "Boy(name=" << this->name << ", age=" << this->age << ")" << endl;
}
