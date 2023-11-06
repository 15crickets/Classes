#include <iostream>
#include <cstring>
#include <vector>
#include "parent.h"
#include "games.h"
#include "music.h"
#include "movies.h"
using namespace std;



int main(){
  vector <parent*> media;
  cout << "What type of media are you using?" << endl;
  char type [10];
  cin.get(type, 10);
  if(strcmp(type, "games") == 0){
    games* g = new games();
    media.push_back(g);
    vector <parent*> :: iterator iter = media.begin();
    for(iter = media.begin(); iter < media.end(); iter++){
      cout << (*iter) -> vibes << endl;
    }
    
  }
  if(strcmp(type, "movies") == 0){
    movies* m = new movies();
  }
  if(strcmp(type, "music") == 0){
    music* mu = new music();
  }
  



}
