#ifndef DATA
#define DATA
#include <string>
class Data {
protected:
  std::string name;

public:
  Data(std::string);
  std::string getName();
  void print();
};
#endif
