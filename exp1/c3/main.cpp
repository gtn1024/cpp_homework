#include "Boy.h"
#include "Girl.h"
#include <iostream>

using namespace std;

int main() {
  Boy b("小明", 18);
  Girl g("小红", 8);
  // b.print();
  // g.print();
  g.visitBoy(b);
  return 0;
}
