
#include <iostream>
#include "parent.h"
using namespace std;

class music : public parent{
  public:
    music();
    char publisher[40];

    void getPublisher(char (&publisher)[40]);
    char artist [40];
    char duration[40];
    void getDuration(char (&duration)[40]);
    void getArtist(char (&artist)[40]);
    void display();

};
