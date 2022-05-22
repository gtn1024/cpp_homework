#include <iostream>

template <typename T> class Complex {
private:
  T real;
  T image;

public:
  Complex(T real, T image) : real(real), image(image) {}
  void print() {
    std::cout << this->real << " + " << this->image << "i" << std::endl;
  }
  Complex operator+(const Complex &c) {
    return Complex(this->real + c.real, this->image + c.image);
  }
  Complex operator-(const Complex &c) {
    return Complex(this->real - c.real, this->image - c.image);
  }
};

int main() {
  Complex<int> getn_ic1(3, 4);
  Complex<int> getn_ic2(1, 2);
  auto getn_ic3 = getn_ic1 + getn_ic2;
  auto getn_ic4 = getn_ic1 - getn_ic2;
  getn_ic3.print();
  getn_ic4.print();

  std::cout << "================" << std::endl;

  Complex<double> getn_dc1(5.6, 7.8);
  Complex<double> getn_dc2(1.2, 3.4);
  auto getn_dc3 = getn_dc1 + getn_dc2;
  auto getn_dc4 = getn_dc1 - getn_dc2;
  getn_dc3.print();
  getn_dc4.print();

  return 0;
}
