#include <iostream>
using namespace std;

template <class T> void s(T &x, T &y) {
  T z;
  z = y;
  y = x;
  x = z;
}

int main() {
  int m = -1, n = 8;
  double u = -5.5, v = 99.3;
  cout << "m=" << m << " n=" << n << endl;
  cout << "u=" << u << " v=" << v << endl;
  s(m, n);
  s(u, v);
  cout << "m=" << m << " n=" << n << endl;
  cout << "u=" << u << " v=" << v << endl;
  return 0;
}