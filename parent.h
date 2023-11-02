#ifndef PARENT_H
#define PARENT_H
#include <iostream>
using namespace std;

class parent{
 public:
  parent();
  void getTitle();
  void getYear();
 protected:
  int year;
  char title [80];



};
#endif
