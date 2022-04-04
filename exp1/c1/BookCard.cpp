#include "BookCard.h"
#include <iostream>
#include <string>
using namespace std;

BookCard::BookCard(string pId, string pStuName, int pNumber)
    : id(pId), stuName(pStuName), number(pNumber) {}

void BookCard::display() {
  cout << this->id << " " << this->stuName << " " << this->number << endl;
}

bool BookCard::borrow() {
  if (this->number < 10) {
    this->number++;
    return true;
  } else {
    return false;
  }
}
