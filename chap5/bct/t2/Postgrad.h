#ifndef POSTGRAD
#define POSTGRAD
#include "Student.h"
#include <string>
class Postgrad : virtual public Student {
protected:
  int dn;

public:
  Postgrad(std::string name, int id, int dn);
  int getDN();
  void print();
};
#endif
