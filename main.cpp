/*
Author: Vikram Vasudevan
Date: 11/13/2023
Description: This program allows a user to enter a type of media into a database. It also allows a user to search for previously
entered media, and allows them to delete any previous entries.

*/


#include <iostream>
#include <cstring>
#include <vector>
//includes of the parent and children .h files
#include "parent.h"
#include "games.h"
#include "music.h"
#include "movies.h"
using namespace std;
//initializing function prototypes and other important variables.
void add(vector <parent*> &media);
void searchPrint(vector <parent*> &media);
void demolish(vector <parent*> &media);
bool stillPlaying = true;
vector <parent*> media;
//main
int main(){
  vector <parent*> media;
  //while loop that runs until game ends.
  while(stillPlaying == true){
    //inputting and processing what the user would like to do via if statements.
    char method[20];
    cout << "What would you like to do: Add, Search, Delete, or Quit?: " << endl;
    cin.get(method, 20);
    cin.get();
    if(strcmp(method, "Add") == 0){
      add(media);
    }
    else if(strcmp(method, "Search") == 0){
      searchPrint(media);
    }
    else if(strcmp(method, "Delete") == 0){
      demolish(media);
    }
    else if(strcmp(method, "Quit") == 0){
      //game ends
      stillPlaying = false;
    }
  }


}
//this function deletes an entry from the database.
void demolish(vector <parent*> &media){
  cout << "Would you like to search for the item you'd like to delete by year or title?: " << endl;
  char deleteType [30];
  cin.get(deleteType, 30);
  cin.get();
  vector <parent*> :: iterator iter = media.begin();
  //these if/else if statements determine if the user is searching for their chosen entry by year or title.
  if(strcmp(deleteType, "title") == 0){
    char deleteTitle[80];
    cout << "What is the title? " << endl;
    cin.get(deleteTitle, 80);
    cin.get();
    //this loop/if-statement combination finds an entry that matches the user's search.
    for(iter = media.begin(); iter < media.end(); iter++){
      if(strcmp((*iter)->title, deleteTitle) == 0){
        (*iter) -> display();
        cout << "Is this the entry you'd like to delete? (y/n) " << endl;
        char yes_no;
        cin >> yes_no;
        cin.get();
        //if the user wants to delete the entry, then this statement is called.
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
    //this loop/if-statement combination finds an entry that matches the user's search.
    for(iter = media.begin(); iter < media.end(); iter++){
      if(strcmp((*iter)-> year, deleteYear) == 0){
       (*iter) -> display();
        cout << "Is this the entry you'd like to delete? (y/n) " << endl;
        char yes_no;
        cin >> yes_no;
        cin.get();
        //if the user wants to delete the entry, then this statement is called.
        if(yes_no == 'y'){
          delete *iter;
          media.erase(iter);
          return;
        }
      }
      
    }
  }

}
//this function searches for and prints out an element in the database.
void searchPrint(vector <parent*> &media){
  cout << "Would you like to search by year or title?: " << endl;
  char searchType [30];
  cin.get(searchType, 30);
  cin.get();
  vector <parent*> :: iterator iter = media.begin();
  //these if statements determine how the user would like to search.
  if(strcmp(searchType, "title") == 0){
    char searchTitle[80];
    cout << "What is the title? " << endl;
    cin.get(searchTitle, 80);
    cin.get();
    //this for loop prints out all the media elements that match the user's search.
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
    //this for loop prints out all the media elements that match the user's search.
    for(iter = media.begin(); iter < media.end(); iter++){
      if(strcmp((*iter)-> year, searchYear) == 0){
        (*iter) -> display();
      }
      
    }
  }
  

}
//this function adds media elements to the database.
void add(vector <parent*> &media){
  bool validInput = false;
  while(validInput == false){
    cout << "What type of media are you entering? (movies, music, games)" << endl;
    char type [10];
    cin.get(type, 10);
    cin.get();
    //these if statements determine what type of media is being entered into the vector of parent pointers.
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
      cout << "Please enter a valid input" << endl;
    }
  }
}