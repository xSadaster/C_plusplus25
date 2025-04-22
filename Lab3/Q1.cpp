/*Assignment 1: Create a class called Book with the following information
Private attributes:
• title (string)
• pages (int)
• author(string) = “Peter”,
Protected:
• Price(float)
Public:
• publisher(string)
• displayAuthorInfo() -the function printout the author info to terminal
In main function, create a Book object */

#include <iostream>
#include <string>
using namespace std; //default std

class Book {
private:        // Private (can't be accessed outside of the class)
    string title; 
    int pages; 
    string author = "Peter"; 
  
protected:    // Protected attribute (can be accessed, in child classes)
    float price;
   
public:      //this can be accessed from outside the class
    string publisher; 
    void displayAuthorInfo() {
    cout << "Author: " << author << endl; }  //display author 
}; // classes apparently need to end with a semicolon. Noted.

int main() {
    Book Book1; // Create the object
  /*Book1.title = "C++ Programming";    //this part of the code doesn't let me compile, so it's commented out.
    cout << "Title: " << Book1.title << endl;*/
    Book1.publisher = "NotCreative Works"; // Set publisher, not a problem
    cout << "Publisher: " << Book1.publisher << endl; // Print publisher
    Book1.displayAuthorInfo(); // Call displayAuthorInfo to print author info
}