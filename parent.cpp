#include <iostream>
#include <cstring>
#include "parent.h"
using namespace std;

parent::parent(){
  cout << "Constructor";
  year = 0;
}
char[] parent::getTitle(){
  cout << "What's the title? " << endl;
  cin.get(title, 80);
  cin.get();
  return title;
}
int parent::getYear(){
  cout << "What year was it made? " << endl;
  cin >> year;
  return year;
}


