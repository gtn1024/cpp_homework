#include "Student.h"
#include "Data.h"
#include <iostream>
#include <string>
Student::Student(std::string name, int id) : Data(name), id(id) {}

int Student::getID() { return id; }

void Student::print() {
  Data::print();
  std::cout << "ID: " << id << std::endl;
}
