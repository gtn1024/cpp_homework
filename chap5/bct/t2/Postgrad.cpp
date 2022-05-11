#include "Postgrad.h"
#include "Data.h"
#include "Student.h"
#include <iostream>
#include <string>

Postgrad::Postgrad(std::string name, int id, int dn)
    : Data(name), Student(name, id), dn(dn) {}

int Postgrad::getDN() { return dn; }

void Postgrad::print() {
  Student::print();
  std::cout << "Degree number: " << dn << std::endl;
}
