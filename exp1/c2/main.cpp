#include "Time.h"

// void f(Time t) { t.printTime(); }
// void f(Time &t) { t.printTime(); }
void f(Time *t) { t->printTime(); }

int main() {
  Time t1;            // 无参构造
  Time t2(8, 28, 22); // Time(int, int, int) 构造
  Time t3(t2);        // 拷贝构造
  t1.setHour(8);
  t1.setMinute(32);
  t1.setSecond(40);
  t2.increaceOneSecond();
  t1.printTime();
  t2.printTime();
  t3.printTime();

  return 0;
}
