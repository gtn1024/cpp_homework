#include <iostream>
using namespace std;

const double PI = 3.142;

int main() {
  double r;
  cout << "Please input the radius: " << endl;
  cin >> r;
  cout << "Area: " << PI * r * r << endl;
  cout << "Circumference: " << 2 * PI * r << endl;
  return 0;
}
