#ifndef STUDENT
#define STUDENT
#include "Data.h"
#include <string>
class Student : virtual public Data {
protected:
  int id;

public:
  Student(std::string name, int id);
  int getID();
  void print();
};
#endif
