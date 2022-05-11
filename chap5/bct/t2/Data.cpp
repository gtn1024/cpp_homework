#include "Data.h"
#include <iostream>
#include <string>
Data::Data(std::string name) : name(name) {}
std::string Data::getName() { return name; }
void Data::print() { std::cout << name << std::endl; }
