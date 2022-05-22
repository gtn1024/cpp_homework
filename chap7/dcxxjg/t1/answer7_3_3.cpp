#include <cstdlib>
#include <iostream>
using namespace std;
struct student {
  int id, score;
};

template <class T> class buffer {
private:
  T a;
  int empty;

public:
  buffer();
  T get();
  void put(T x);
};
template <class T> buffer<T>::buffer() : empty(0) {}

template <class T> T buffer<T>::get() {
  if (empty == 0) {
    cout << "the buffer is empty!" << endl;
    exit(1);
  }
  return a;
}

template <class T> void buffer<T>::put(T x) {
  empty++;
  a = x;
}
int main() {
  student s = {1022, 78};
  buffer<int> i1, i2;
  buffer<student> stu1;
  buffer<double> d;
  i1.put(13);
  i2.put(-101);
  cout << i1.get() << " " << i2.get() << endl;
  stu1.put(s);
  cout << "the student's id is " << stu1.get().id << endl;
  cout << "the student's score is " << stu1.get().score << endl;
  cout << d.get() << endl;

  return 0;
}