#include <iostream>
using namespace std;
class matrix {
private:
  int x, y;

public:
  matrix(int x, int y) {
    this->x = x;
    this->y = y;
  }
  void print() { cout << "x=" << x << " y=" << y << endl; }
  matrix operator+(const matrix &m) { return matrix(x + m.x, y + m.y); }
  matrix operator-(const matrix &m) { return matrix(x - m.x, y - m.y); }
  matrix operator*(const matrix &m) { return matrix(x * m.x, y * m.y); }
  matrix operator=(const matrix &m) {
    this->x = m.x;
    this->y = m.y;
    return *this;
  }
  matrix operator+=(const matrix &m) {
    this->x += m.x;
    this->y += m.y;
    return *this;
  }
};

int main() {
  matrix getn1(1, 2), getn2(3, 4);
  auto getn3 = getn1 + getn2;
  getn3.print();
  getn3 = getn2 - getn1;
  getn3.print();
  getn3 = getn1 * getn2;
  getn3.print();
  getn3 = getn1;
  getn3.print();
  getn3 += getn2;
  getn3.print();

  return 0;
}
