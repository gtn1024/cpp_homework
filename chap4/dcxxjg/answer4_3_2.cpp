#include <iostream>

using namespace std;
class FF {
  static int num;

public:
  FF() { num++; }
  ~FF() { num--; }
  static int getNum() { return num; }
};
int FF::num = 0;
int main() {
  cout << FF::getNum() << ",";
  FF *p = new FF[2], a[2];
  cout << p[0].getNum() << ",";
  cout << p[1].getNum() << ",";
  cout << a[0].getNum() << ",";
  cout << a[1].getNum() << ",";
  delete[] p;
  cout << a[0].getNum() << ",";
  cout << a[1].getNum() << ",";
  cout << FF::getNum() << endl;
  return 0;
}