
#include <iostream>
#include "parent.h"
using namespace std;

class games : public parent{
  public:
    games();
    void getPublisher();
    void getRating();
    char publisher[40];
    int vibes;
  void display();
  



};
