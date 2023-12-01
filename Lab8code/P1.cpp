//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    string bookName;

    while(true){
        cout << "Enter a command: ";
        cin >> command;
        if(command == "a"){
            cin >> bookName;
            if(library.addBook(bookName)){
                cout << "Book added" << endl;
            }else{
                cout << "Book already exists or library is full" << endl;
            }
        }else if(command == "r"){
            cin >> bookName;
            if(library.removeBook(bookName)){
                cout << "Book removed" << endl;
            }else{
                cout << "Book does not exist" << endl;
            }
        }else if(command == "p"){
            library.print();
        }else if(command == "q"){
            cout << "Exiting" << endl;
            break;
        }else{
            cout << "Invalid Command" << endl;
        }
    }
    
}
