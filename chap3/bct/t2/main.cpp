#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Car car1;
  car1.setBrand("Toyota");
  car1.setModel("Corolla");
  car1.setYear(2010);
  car1.setPrice(10000);
  car1.print();

  cout << "+++++++++++++++" << endl;

  Car car2("Honda", "Civic", 2012, 20000);
  cout << "Brand: " << car2.getBrand() << endl;
  cout << "Model: " << car2.getModel() << endl;
  cout << "Year: " << car2.getYear() << endl;
  cout << "Price: " << car2.getPrice() << endl;

  return 0;
}
