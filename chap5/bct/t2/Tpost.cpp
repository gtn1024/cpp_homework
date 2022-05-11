#include "Tpost.h"
#include "Data.h"
#include "Postgrad.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>
Tpost::Tpost(std::string name, int id, int dn, int sal)
    : Data(name), Student(name, id), Postgrad(name, id, dn),
      Teacher(name, sal) {}

void Tpost::print() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "ID: " << getID() << std::endl;
  std::cout << "Degree number: " << getDN() << std::endl;
  std::cout << "Salary: " << getSal() << std::endl;
}
