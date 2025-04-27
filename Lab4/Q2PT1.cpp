/* Example 2:
In this example, we will utilize the same Book class as above 
(it was in pictures, so not included here)
but we have another class named
Expected output given. (as a screenshot) */

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;
public:

    //Constructor
    Book(string t = "untitled", int p=0) : title(t), pages (p){
        cout << "Constructor: \""<<title<<"\" with " <<pages<< " pages\n"; }
    // Destructor
    void display() const {
        cout << "Title: " << title << ", Pages: " << pages << endl<<flush; }
};

int main() {
    // Create array of 3 book objects
    Book library[3] = {
        {"C++ Fundamentals", 300},
        {"Data Structures", 450},
        {"Algorithms", 500}  };

    cout << "\n---Library Contents---\n";
    for (int i = 0; i < 3; i++) {
        library[i].display(); }

    cout << "\n---End of Program---\n";
    return 0;}