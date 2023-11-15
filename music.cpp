
#include <iostream>
#include "music.h"
//constructor
music::music(){
    getPublisher(publisher);
    getArtist(artist);
    getDuration(duration);

}
//destructor
music::~music(){
}
//this function allows the user to enter the publisher of the music.
void music::getPublisher(char (&publisher)[40]){
  cout << "Who is the publisher of this music? " << endl;
  cin.get(publisher, 40);
  cin.get();
  return;
}
//this function allows the user to enter the artist of the music.
void music::getArtist(char (&artist)[40]){
  cout << "Who is the artist? " << endl;
  cin.get(artist, 40);
  cin.get();
}
//this function allows the user to enter the duration of the music.
void music::getDuration(char (&duration)[40]){
  cout << "How long is the song (in seconds)? " << endl;
  cin.get(duration, 40);
  cin.get();
}
//this method prints the information about the music to the console.
void music::display(){
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
  cout << "Artist: ";
  for(int i = 0; i < strlen(artist); i++){
    cout << artist[i];
  }
  cout << endl;
  cout << "Duration: ";
    for(int i = 0; i < strlen(duration); i++){
    cout << duration[i];
  }
  cout << " seconds" << endl;
}



  
