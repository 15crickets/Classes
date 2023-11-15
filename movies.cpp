
#include <iostream>
#include "movies.h"
//constructor
movies::movies(){
  getDirector(director);
  getRating(rating);
  getDuration(duration);

}
//destructor
movies::~movies(){
}

//this method prompts the user to enter the director of the movie.
void movies::getDirector(char (&director)[40]){
  cout << "Who is the director of this movie? " << endl;
  cin.get(director, 40);
  cin.get();
  return;
}
//this method prompts the user to enter the rating of the movie.
void movies::getRating(char (&rating)[40]){
  cout << "What is the movie's rating? " << endl;
  cin.get(rating, 40);
  cin.get();
}
//this method prompts the user to enter the duration of the movie.
void movies::getDuration(char (&duration)[40]){
  cout << "How long is the movie (in minutes)? " << endl;
  cin.get(duration, 40);
  cin.get();
}

//this method prints the information about the movie to the console.
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



  
