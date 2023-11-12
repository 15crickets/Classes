#include <iostream>
#include <cstring>
#include "games.h"

using namespace std;

games::games(){
  getPublisher(publisher);
  getRating(rating);
  
}
games::~games(){
  cout << "This is when the destructor is called!!!!" << endl;
}

void games::getPublisher(char (&publisher)[40]){
  cout << "Who is the publisher of this game? " << endl;
  cin.get(publisher, 40);
  cin.get();
  return;
}

void games::getRating(char (&rating)[40]){
  cout << "What's the game's rating? " << endl;
  cin.get(rating, 40);
  cin.get();
}

void games::display(){
  cout << "Title: ";
  for(int i = 0; i < strlen(title); i++){
    cout << title[i];
  }
  cout << endl;
  cout << "Publisher: ";
  for(int i = 0; i < strlen(publisher); i++){
    cout << publisher[i];
  }
  cout << endl;

  for(int i = 0; i < strlen(year); i++){
    cout << year[i];
  }
  cout << endl;
  for(int i = 0; i < strlen(rating); i++){
    cout << rating[i];
  }
  cout << endl;
}



  
