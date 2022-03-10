#include <iostream>
using namespace std;

int main() {
  int arr[4] = {1, 2, 3, 4}, i;
  int *a = arr;
  int *&p = a;
  p++;
  *p = 100;
  cout << *a << "\t" << *p << endl;
  for (i = 0; i < 4; i++)
    cout << arr[i] << "\t";
  cout << endl;
  int b = 10;
  p = &b;
  cout << *a << "\t" << *p << endl;
  for (i = 0; i < 4; i++)
    cout << arr[i] << "\t";
  cout << endl;
  return 0;
}
