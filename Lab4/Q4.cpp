//Assignment for cin.ignore(); to show how it's important.
#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;
    string name;
    // First case, w/o cin.ignore:
    // Ask for inputs from user.
    cout << "Case 1\nEnter you age: ";
    cin >> age; // this leaves a new line in the buffer
    cout << "Enter your full name: ";
    getline(cin, name); // getline gets the whole line including spaces, but ends with a new line, which wasn't cleared
    cout << "Age: " << age << ", Name: " << name << endl; //So it takes the new line input from the previous state and breaks
    // Second case, with cin.ignore:
    // Ask for inputs from user.
    cout << "Case 2\nEnter you age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Age: " << age << ", Name: " << name << endl;
    return 0;
}