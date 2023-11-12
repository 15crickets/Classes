
#include <iostream>
#include "parent.h"
using namespace std;

class games : public parent{
  public:
    games();
    ~games();
    char publisher[40];

    void getPublisher(char (&publisher)[40]);
    char rating [40];
    void getRating(char (&rating)[40]);
    void display();
  



};
