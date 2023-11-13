
#include <iostream>
#include <cstring>
#include "parent.h"
using namespace std;

parent::parent(){
  getTitle(title);
  getYear(year);
}
parent::~parent(){
  cout << "Destructor is called " << endl;
}
void parent::getTitle(char (&title) [80]){
  cout << "What's the title? " << endl;
  cin.get(title, 80);
  cin.get();
}
void parent::getYear(char (&year) [40]){
  cout << "What year was it made? " << endl;
  cin.get(year, 40);
  cin.get();
}
void parent::display(){
  return;
}


