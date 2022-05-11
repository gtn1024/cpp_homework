#ifndef TPOST
#define TPOST
#include "Postgrad.h"
#include "Teacher.h"
#include <string>
class Tpost : public Postgrad, public Teacher {
public:
  Tpost(std::string name, int id, int dn, int sal);
  void print();
};
#endif
