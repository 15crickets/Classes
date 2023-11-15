
#include <iostream>
#include <cstring>
#include "parent.h"
using namespace std;
//constructor
parent::parent(){
  getTitle(title);
  getYear(year);
}
//destructor
parent::~parent(){

}
//this function allows the user to enter the title of the media
void parent::getTitle(char (&title) [80]){
  cout << "What's the title? " << endl;
  cin.get(title, 80);
  cin.get();
}
//this function allows the user to enter the year in which the media was displayed.
void parent::getYear(char (&year) [40]){
  cout << "What year was it made? " << endl;
  cin.get(year, 40);
  cin.get();
}
//this is a virtual function and is a placeholder.
void parent::display(){
  return;
}


