//include headers and libraries
#include "Library.h"
#include <iostream>
//implement class functions
Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}
bool Library::addBook(string bookName){
    //check if the book already exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    //check if the library is full
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(string bookName){
    //check if the book exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

void Library::print(){
    for(int i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}