
#include <iostream>
#include "movies.h"

movies::movies(){
  getDirector(director);
  getRating(rating);
  getDuration(duration);

}
void movies::getDirector(char (&director)[40]){
  cout << "Who is the director of this movie? " << endl;
  cin.get(director, 40);
  cin.get();
  return;
}

void movies::getRating(char (&rating)[40]){
  cout << "What is the movie's rating? " << endl;
  cin.get(rating, 40);
  cin.get();
}
void movies::getDuration(char (&duration)[40]){
  cout << "How long is the movie (in minutes)? " << endl;
  cin.get(duration, 40);
  cin.get();
}

void movies::display(){
  cout << "Title: ";
  for(int i = 0; i < strlen(title); i++){
    cout << title[i];
  }
  cout << endl;
  cout << "Director: ";
  for(int i = 0; i < strlen(director); i++){
    cout << director[i];
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
  cout << "Duration: ";
    for(int i = 0; i < strlen(duration); i++){
    cout << duration[i];
  }
  cout << " minutes" << endl;
}



  
