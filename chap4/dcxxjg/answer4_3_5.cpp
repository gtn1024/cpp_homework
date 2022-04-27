#include <iostream>
#include <string>

using namespace std;

class Student {
  int age;
  string name;

public:
  Student(int a, string n) : age(a), name(n) {}
  friend void disp(Student &);
  ~Student() {}
};

void disp(Student &p) {
  cout << "Student's name is " << p.name << ", age is " << p.age << endl;
}

int main() {
  Student A(18, "wujiang");
  Student B(19, "xiayu");
  disp(A);
  disp(B);
  return 0;
}