#include <string>
using namespace std;

class BookCard {
private:
  string id;      //借书证学生的学号
  string stuName; //借书证学生的姓名
  int number;     //所借书的数量

public:
  BookCard(string = "B19010250", string = "雪峰", int = 4);
  void display();
  bool borrow();
};
