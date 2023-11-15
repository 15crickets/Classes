#include <iostream>
#include <cstring>
#include "games.h"

using namespace std;
//constructor which calls the games-specific methods.
games::games(){
  getPublisher(publisher);
  getRating(rating);
  
}
//destructor
games::~games(){
}
//this method prompts the user to enter the publisher of the game.
/*
for this method and all other methods of its type across games.cpp, movies.cpp and music.cpp, the char array is passed by reference
so that the actual  char array is changed, and thus when display is called, the user inputted value is outputted.
*/
void games::getPublisher(char (&publisher)[40]){
  cout << "Who is the publisher of this game? " << endl;
  cin.get(publisher, 40);
  cin.get();
  return;
}
//this method prompts the user to enter the rating of the game.
void games::getRating(char (&rating)[40]){
  cout << "What's the game's rating? " << endl;
  cin.get(rating, 40);
  cin.get();
}
//this method prints the information about the game to the console.
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

  cout << "Year: ";
  for(int i = 0; i < strlen(year); i++){
    cout << year[i];
  }
  cout << endl;
  cout << "Rating: ";
  for(int i = 0; i < strlen(rating); i++){
    cout << rating[i];
  }
  cout << endl;
}



  
