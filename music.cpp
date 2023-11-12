
#include <iostream>
#include "music.h"

music::music(){
    getPublisher(publisher);
    getArtist(artist);
    getDuration(duration);

}
void music::getPublisher(char (&publisher)[40]){
  cout << "Who is the publisher of this music? " << endl;
  cin.get(publisher, 40);
  cin.get();
  return;
}

void music::getArtist(char (&artist)[40]){
  cout << "Who is the artist? " << endl;
  cin.get(artist, 40);
  cin.get();
}
void music::getDuration(char (&duration)[40]){
  cout << "How long is the song (in seconds)? " << endl;
  cin.get(duration, 40);
  cin.get();
}

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



  
