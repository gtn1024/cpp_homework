#include "Tpost.h"
#include <iostream>
#include <ostream>
int main() {
  Tpost t("John", 123, 456, 789);
  std::cout << "Name: " << t.getName() << std::endl;
  std::cout << "ID: " << t.getID() << std::endl;
  std::cout << "Degree number: " << t.getDN() << std::endl;
  std::cout << "Salary: " << t.getSal() << std::endl;
  std::cout << "==========================" << std::endl;
  t.print();
  return 0;
}
