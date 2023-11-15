
#ifndef PARENT_H
#define PARENT_H
#include <iostream>
using namespace std;

class parent{
 public:
 //initialization of functions and arrays
  parent();
  virtual ~parent();
  char title [80];
  void getTitle(char (&title) [80]);
  char year [40];
  void getYear(char (&year)[40]);
  //virtual display function that changes for each media type
  virtual void display();



};
#endif
