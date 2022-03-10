#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
float checkAgeScore(int age, float score);
int main() {
  string name;
  int age;
  float score;
  cin >> name >> age >> score;
  float ssc;
  try {
    ssc = checkAgeScore(age, score);
  } catch (const char *s) {
    cout << "Exception: " << s << endl;
    exit(1);
  }
  cout << "Name\tAge\tScore" << endl;
  cout << name << '\t' << age << '\t' << ssc << endl;
  return 0;
}
float checkAgeScore(int age, float score) {
  if (!(age >= 16 && age <= 25) || !(score >= 0 && score <= 5))
    throw "Age or score is not valid!";
  return score * 20;
}
