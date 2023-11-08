#include <iostream>
#include <cstring>
#include "games.h"

using namespace std;

games::games(){
  getPublisher();
  
}
char[] games::getPublisher(){
  cout << "Who is the publisher of this game? " << endl;
  cin.get(publisher, 40);
  cin.get();
  return publisher;

}
int games::getRating(){
  cout << "What's the game's rating? " << endl;
  cin >> rating;
  return rating;
}
void games::display(){
  cout << "Title: " << getTitle() << endl;
  cout << "Year: " << getYear() << endl;
  cout << "Rating: " << getRating() << endl;
  cout << "Publisher: " << getPublisher() << endl;
}



  
