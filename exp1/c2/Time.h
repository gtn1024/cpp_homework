#include <string>
class Time {
private:
  int hour;
  int minute;
  int second;
  std::string formatedDisplay();

public:
  Time();
  Time(int, int, int);
  Time(const Time &);
  ~Time();
  void setHour(int);
  void setMinute(int);
  void setSecond(int);
  int getHour();
  int getMinute();
  int getSecond();
  void printTime();
  void increaceOneSecond();
};
