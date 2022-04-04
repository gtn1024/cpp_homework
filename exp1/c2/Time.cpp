#include "Time.h"
#include <iostream>
#include <string>
using namespace std;

string Time::formatedDisplay() {
  string s = "Time(";
  s.append(this->hour < 10 ? "0" : "\0");
  s.append(to_string(this->hour));
  s.append(", ");
  s.append(this->minute < 10 ? "0" : "\0");
  s.append(to_string(this->minute));
  s.append(", ");
  s.append(this->second < 10 ? "0" : "\0");
  s.append(to_string(this->second));
  s.append(")");
  return s;
}

Time::Time() { cout << "Time()构造器被调用" << endl; }

Time::Time(int pHour, int pMinute, int pSecond)
    : hour(pHour), minute(pMinute), second(pSecond) {
  cout << "Time(int, int, int)构造器被调用" << endl;
}

Time::Time(const Time &time)
    : hour(time.hour), minute(time.minute), second(time.second) {
  cout << "Time(Time &)构造器被调用" << endl;
}

Time::~Time() { cout << this->formatedDisplay() << "析构函数被调用" << endl; }

void Time::setHour(int hour) { this->hour = hour; }

void Time::setMinute(int minute) { this->minute = minute; }

void Time::setSecond(int second) { this->second = second; }

int Time::getHour() { return this->hour; }

int Time::getMinute() { return this->minute; }

int Time::getSecond() { return this->second; }

void Time::printTime() { cout << formatedDisplay() << endl; }

void Time::increaceOneSecond() {
  this->second++;
  if (this->second >= 60) {
    this->minute++;
    this->second -= 60;
  }
  if (this->minute >= 60) {
    this->hour++;
    this->minute -= 60;
  }
  if (this->hour >= 24) {
    this->hour -= 24;
  }
}
