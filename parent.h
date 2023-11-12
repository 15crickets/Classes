
#ifndef PARENT_H
#define PARENT_H
#include <iostream>
using namespace std;

class parent{
 public:
  parent();
  ~parent();
  char title [80];
  void getTitle(char (&title) [80]);
  char year [40];
  void getYear(char (&year)[40]);
  
  virtual void display();



};
#endif
