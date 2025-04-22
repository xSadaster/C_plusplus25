/*Assignment 4: Inheritance classes

4.1 Create a Vehicle base class having the following one:
Attributes (protected):
• brand (string)
• year (int)
Methods:
• Constructor: initializes brand and year
• void showInfo(): displays brand and year
• void startEngine(): prints "Starting engine of Vehicle"

4.2 Create a derived class: Car
Inherits from Vehicle
Additional attribute (private):
• numDoors (int)
Methods:
• Constructor: takes brand, year, and numDoors and calls the base constructor
• Override showInfo() to display all 3 attributes
• Override startEngine() to print: "Car engine is starting!"

4.3 Create a derived ElectricCar class inherits from Car
Additional attribute (private):
• batteryCapacity (int, representing battery size in kWh)
Methods:
• Constructor overloading: Provide two constructors:
1. Default constructor: Sets batteryCapacity to 0
2. Parameterized constructor: Takes all attributes (brand, year, numDoors,
batteryCapacity) and calls the base class constructors
• Override showInfo() to display all attributes (brand, year, numDoors, batteryCapacity)
• Override startEngine() to print: "Electric engine is starting... Silent but powerful!"
In main() Function:
1. Create a Vehicle object using new and call showInfo() and startEngine()
2. Create a Car object using new and call showInfo() and startEngine()
3. Create an ElectricCar object using both the default constructor and the parameterized
constructor, and call showInfo() and startEngine()

4. Use delete to clean up memory for all objects
Expected output: You should get the output which may look like the below one. The information can be
a bit different.
Brand: Generic
Year: 2015
Starting engine of Vehicle
Brand: Toyota
Year: 2021
Number of doors: 4
Car engine is starting!
Brand: Tesla
Year: 2023
Number of doors: 4
Battery Capacity: 75 kWh
Electric engine is starting... Silent but powerful!
Brand: Nissan
Year: 2022
Number of doors: 4
Battery Capacity: 40 kWh
Electric engine is starting... Silent but powerful! */

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;
public:
    Vehicle(string b, int y) : brand(b), year(y) {} // Constructor, brand and year
    virtual void showInfo() { // virtual because it will be overridden
    cout <<"Brand: "<<brand<<", Year: "<<year<<endl; } // Display brand and year
    virtual void startEngine() { // virtual function to be overridden
    cout <<"Starting engine of Vehicle" << endl; } // Start engine message
    virtual ~Vehicle() {} // Virtual destructor for cleanup
};

class Car : public Vehicle { // Inherit from Vehicle
private:
    int numDoors; // Number of doors
public:
    Car(string b, int y, int n) : Vehicle(b, y), numDoors(n) {} // Constructor initializes base and numDoors
    void showInfo() override { // Override showInfo to display all attributes
    Vehicle::showInfo(); // Call base class showInfo
    cout << "Number of doors: " << numDoors << endl; } // Display number of doors
    void startEngine() override { // Override startEngine for Car
    cout << "Car engine is starting!" << endl; } // Start engine message for Car
};

class ElectricCar : public Car { // Inherit from Car
private:
    int batteryCapacity; // Battery capacity in kWh
public:
    ElectricCar() : Car("Default-Option", 0, 0), batteryCapacity(0) {} // Default constructor
    ElectricCar(string b, int y, int n, int bc) : Car(b, y, n), batteryCapacity(bc) {} // Parameterized constructor
    void showInfo() override { // Override showInfo to display all attributes
    Car::showInfo(); // Call base class showInfo
    cout << "Battery Capacity: " << batteryCapacity << " kWh" <<endl; } // Display battery capacity
    void startEngine() override { // Override startEngine for ElectricCar
    cout << "Electric engine is starting... Silent but powerful!" <<endl; } // Start engine message for ElectricCar
};

int main() {
    Vehicle* vehicle = new Vehicle("AnyVehicle", 2015); // Create Vehicle object
    vehicle->showInfo();
    vehicle->startEngine(); 

    Car* car = new Car("Toyota", 2021, 4); // Create Car object, notice 3 parameters.
    car->showInfo();
    car->startEngine();

    ElectricCar* eCarDef = new ElectricCar(); // Create ElectricCar object w/ default constructor
    eCarDef->showInfo(); 
    eCarDef->startEngine();

    ElectricCar* eCar = new ElectricCar("Tesla", 2077, 4, 88); // Create another ElectricCar object using parameterized constructor
    eCar->showInfo();
    eCar->startEngine();

    ElectricCar* CarQuestion = new ElectricCar("Nissan", 2022, 4, 40);
    CarQuestion->showInfo();
    CarQuestion->startEngine();
    delete CarQuestion;

// clean up memory
    delete vehicle; 
    delete car; 
    delete eCarDef;
    delete eCar;
    return 0; 

}