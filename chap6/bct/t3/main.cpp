#include <iostream>
using namespace std;

class Shapes {
protected:
  int length;

public:
  virtual void display() = 0;
};

class Rectangle : public Shapes {
public:
  Rectangle(int length) { this->length = length; }
  void display() {
    cout << "假装是矩形" << endl;
    cout << "length=" << this->length << endl;
  }
};

class Circle : public Shapes {
public:
  Circle(int length) { this->length = length; }
  void display() {
    cout << "假装是圆形" << endl;
    cout << "length=" << this->length << endl;
  }
};

int main() {
  Shapes *getn;
  Rectangle rect(5);
  Circle circle(10);
  getn = &rect;
  getn->display();
  cout << "============================" << endl;
  getn = &circle;
  getn->display();

  return 0;
}