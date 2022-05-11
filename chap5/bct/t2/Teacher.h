#ifndef TEACHER
#define TEACHER
#include "Data.h"
#include <string>
class Teacher : virtual public Data {
protected:
  int sal;

public:
  Teacher(std::string name, int sal);
  int getSal();
  void print();
};
#endif
