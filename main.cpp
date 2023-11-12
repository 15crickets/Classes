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
void demolish(vector <parent*> &media);
bool stillPlaying = true;
vector <parent*> media;

int main(){
  vector <parent*> media;

  while(stillPlaying == true){
    char method[20];
    cout << "What would you like to do: Add, Search, Delete, or Quit?: " << endl;
    cin.get(method, 20);
    cin.get();
    if(strcmp(method, "Add") == 0){
      add(media);
    }
    else if(strcmp(method, "Search") == 0){
      printOut(media);
    }
    else if(strcmp(method, "Delete") == 0){
      demolish(media);
    }
    else if(strcmp(method, "Quit") == 0){
      stillPlaying = false;
    }
  }



}
void demolish(vector <parent*> &media){
  cout << "Would you like to search for the item you'd like to delete by year or title?: " << endl;
  char deleteType [30];
  cin.get(deleteType, 30);
  cin.get();
  vector <parent*> :: iterator iter = media.begin();
  if(strcmp(deleteType, "title") == 0){
    char deleteTitle[80];
    cout << "What is the title? " << endl;
    cin.get(deleteTitle, 80);
    cin.get();
    for(iter = media.begin(); iter < media.end(); iter++){
      if(strcmp((*iter)->title, deleteTitle) == 0){
        (*iter) -> display();
        cout << "Is this the entry you'd like to delete? (y/n) " << endl;
        char yes_no;
        cin >> yes_no;
        cin.get();
        if(yes_no == 'y'){
          delete *iter;
          media.erase(iter);
          return;
        }
        
      }
    }
  }
  else if (strcmp(deleteType, "year") == 0){
    char deleteYear[80];
    cout << "What is the year of publication? " << endl;
    cin.get(deleteYear, 80);
    cin.get();
    for(iter = media.begin(); iter < media.end(); iter++){
      if(strcmp((*iter)-> year, deleteYear) == 0){
       (*iter) -> display();
        cout << "Is this the entry you'd like to delete? (y/n) " << endl;
        char yes_no;
        cin >> yes_no;
        cin.get();
        if(yes_no == 'y'){
          media.erase(iter);
          return;
        }
      }
      
    }
  }

}

void printOut(vector <parent*> &media){
  cout << "Would you like to search by year or title?: " << endl;
  char searchType [30];
  cin.get(searchType, 30);
  cin.get();
  vector <parent*> :: iterator iter = media.begin();
  if(strcmp(searchType, "title") == 0){
    char searchTitle[80];
    cout << "What is the title? " << endl;
    cin.get(searchTitle, 80);
    cin.get();
    for(iter = media.begin(); iter < media.end(); iter++){
      if(strcmp((*iter)->title, searchTitle) == 0){
        (*iter) -> display();
      }
    }
  }
  else if (strcmp(searchType, "year") == 0){
    char searchYear[80];
    cout << "What is the year of publication? " << endl;
    cin.get(searchYear, 80);
    cin.get();
    for(iter = media.begin(); iter < media.end(); iter++){
      if(strcmp((*iter)-> year, searchYear) == 0){
        (*iter) -> display();
      }
      
    }
  }
  

}
void add(vector <parent*> &media){
  bool validInput = false;
  while(validInput == false){
    cout << "What type of media are you entering? (movies, music, games)" << endl;
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