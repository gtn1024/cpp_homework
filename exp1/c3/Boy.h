#ifndef BOY
#define BOY

#include <string>

class Girl;

class Boy {
private:
  std::string name;
  int age;

public:
  Boy(std::string, int);
  ~Boy();
  void print();

  friend class Girl;
};

#endif
