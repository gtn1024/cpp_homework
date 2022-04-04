#include "BookCard.h"
#include <iostream>

using namespace std;
void f(BookCard &bk) {
  if (!bk.borrow()) {
    bk.display();
    cout << "you have borrowed 10 books,can not borrow any more!" << endl;
  } else
    bk.display();
}

int main() {
  BookCard bk1("B20190620", "东平", 10), bk2;
  f(bk1);
  f(bk2);
  return 0;
}
