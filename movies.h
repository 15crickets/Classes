
#include <iostream>
#include "parent.h"
using namespace std;

class movies : public parent{
  public:
  //initialization of functions and arrays

    movies();
    ~movies();
    char director[40];

    void getDirector(char (&director)[40]);
    char rating [40];
    char duration[40];
    void getDuration(char (&duration)[40]);
    void getRating(char (&rating)[40]);
    void display();


};

