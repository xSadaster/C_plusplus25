#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    double price;
public:
    // Default Constructor (no output)
    Car() : model("NotDefined"), year(0), price(0.0) {}
    // Overloaded Constructor
    Car(string m, int y, double p) : model(m), year(y), price(p) {
        cout << "Car constructor: " << model << " (" << year << ") - $" << price << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car destructor: " << model << " destroyed\n";
    }
    // Function to input car details
    void input() {
        cout << "Enter model: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, model);
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
    }

    // Function to display car details
    void display() const {
        cout << model << " (" << year << ") - $" << price << endl;
    }};

class CarCollection {
private:
    Car* cars; // Dynamic array of Car objects
    int size;
public:
    // Constructor
    CarCollection() {
        cout << "How many cars do you want to enter? ";
        cin >> size;
        cars = new Car[size]; // Dynamically allocate array of cars

        for (int i = 0; i < size; ++i) {
            cout << "\nEnter details for car " << i + 1 << ":\n";
            cars[i].input();
        }
    }

    // Destructor
    ~CarCollection() {
        delete[] cars; // Free dynamically allocated memory
        cout << "CarCollection destroyed\n";
    }

    // Function to display all cars
    void displayCars() const {
        cout << "\n--- Car Collection ---\n";
        for (int i = 0; i < size; ++i) {
            cars[i].display();
        }
    }
};

int main() {
    // Create a CarCollection object
    CarCollection collection;

    // Display all cars
    collection.displayCars();
    return 0;
}