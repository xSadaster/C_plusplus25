/*Assignment 3: Create a Car class
Private Attributes:
• brand (string)
• year (int)
Public Methods:
Constructor
o Initializes brand and year using parameters
o Outputs: "Car <brand> from <year> created."
Destructor
o Outputs: "Car <brand> destroyed."
void showInfo()
o Displays the car brand and manufacturing year
In main() Function:
• Use the constructor to create a car object on the heap using new
• Call the showInfo() method
• Use delete to destroy the object and observe the destructor message */

#include <iostream>
using namespace std;

class Car{

private: //private attributes
string brand;
int year;

public: //public "methods"
    //constructor
Car(string b, int y) : brand(b), year(y) { // Constructor initializes brand and year, handy.
    cout << "Car " << brand << " from " << year << " created." << endl; } // Output message
~Car() { // Destructor
    cout << "Car " << brand << " destroyed." << endl; } // Output when deleted
void showInfo() { // Display car info
    cout << "Brand: " << brand << ", Year: " << year << endl; } // Print
};

int main(){
Car* Car1 = new Car("Brand1", 2020); // Create the object on the heap with new
Car1->showInfo(); // Call showInfo to print car info
delete Car1; // Destroy the object and call the destructor

Car* Car2 = new Car("Brand2", 2021); // Create the object on the heap
Car2->showInfo(); // Call showInfo, print the info.
Car* Car3 = new Car("Brand3", 2022); // Create the object on the heap again
Car3->showInfo();
delete Car3; // Call the destructor by deleting the object
Car2->showInfo(); // Call showInfo to print car info once more just to see if it works
delete Car2; // Destroy the object and call the destructor
// Make a few on the stack as well just to show the difference
Car Car4("Stack1", 2023); // Create the object on the stack
Car4.showInfo(); // Call showInfo to print car info
Car Car5("Stack2", 2024); // and another one  
// no need to delete them, it just works.
}