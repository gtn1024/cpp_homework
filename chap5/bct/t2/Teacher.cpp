#include "Teacher.h"
#include "Data.h"
#include <iostream>
#include <string>

Teacher::Teacher(std::string name, int sal) : Data(name), sal(sal) {}

int Teacher::getSal() { return sal; }

void Teacher::print() {
  Data::print();
  std::cout << "Salary: " << sal << std::endl;
}
