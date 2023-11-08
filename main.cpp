#include <iostream>
#include <cstring>
#include <vector>
#include "parent.h"
#include "games.h"
#include "music.h"
#include "movies.h"
using namespace std;

void add(vector <parent*> &media);
void printOut(vector <parent*> &media);
bool stillPlaying = true;
vector <parent*> media;

int main(){
  vector <parent*> media;

  while(stillPlaying == true){
    char method[20];
    cout << "What would you like to do: Add, Print, Delete, or Quit?: " << endl;
    cin.get(method, 20);
    cin.get();
    if(strcmp(method, "Add") == 0){
      add(media);
    }
    else if(strcmp(method, "Print") == 0){
      print(media);
    }
  }



}
void printOut(vector <parent*> &media){
  vector <parent*> :: iterator iter = media.begin();
  for(iter = media.begin(); iter < media.end(); iter++){
    (*iter) -> display();
  }

}
void add(vector <parent*> &media){
  bool validInput = false;
  while(validInput == false){
    cout << "What type of media are you using?" << endl;
    char type [10];
    cin.get(type, 10);
    cin.get();
    if(strcmp(type, "games") == 0){
      games* g = new games();
      media.push_back(g);
      
      validInput = true;
      
    }
    else if(strcmp(type, "movies") == 0){
      movies* m = new movies();
      media.push_back(m);
      validInput = true;
    }
    else if(strcmp(type, "music") == 0){
      music* mu = new music();
      media.push_back(mu);
      validInput = true;
    }
    else{
      cout << "You're a fraud mate" << endl;
    }
  }
}