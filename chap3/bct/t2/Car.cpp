#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car() {}

Car::Car(string brand, string model, int year, int price) {
  this->brand = brand;
  this->model = model;
  this->year = year;
  this->price = price;
}

void Car::setBrand(string brand) { this->brand = brand; }

void Car::setModel(string model) { this->model = model; }

void Car::setYear(int year) { this->year = year; }

void Car::setPrice(int price) { this->price = price; }

string Car::getBrand() { return brand; }

string Car::getModel() { return model; }

int Car::getYear() { return year; }

int Car::getPrice() { return price; }

void Car::print() {
  cout << "Brand: " << brand << endl;
  cout << "Model: " << model << endl;
  cout << "Year: " << year << endl;
  cout << "Price: " << price << endl;
}
