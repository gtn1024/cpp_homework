#ifndef CAR
#define CAR
#include <string>
using namespace std;
class Car {
private:
  string brand;
  string model;
  int year;
  int price;

public:
  Car();
  Car(string, string, int, int);
  void setBrand(string);
  void setModel(string);
  void setYear(int);
  void setPrice(int);
  string getBrand();
  string getModel();
  int getYear();
  int getPrice();
  void print();
};
#endif
