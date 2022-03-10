#include <iostream>
using namespace std;

int pos, neg;
int main() {
  auto ptr = new int[20];
  for (int i = 0; i < 20; ++i) {
    int tmp;
    cin >> tmp;
    *(ptr + i) = tmp;
    if (tmp > 0) {
      pos++;
    } else if (tmp < 0) {
      neg++;
    }
  }
  cout << "pos num: " << pos << endl;
  cout << "neg num: " << neg << endl;
  return 0;
}
