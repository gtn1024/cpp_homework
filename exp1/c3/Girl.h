#ifndef GIRL
#define GIRL

#include "Boy.h"
#include <string>

class Girl {
private:
  std::string name;
  int age;

public:
  Girl(std::string, int);
  ~Girl();
  void print();
  void visitBoy(Boy &);
};

#endif
