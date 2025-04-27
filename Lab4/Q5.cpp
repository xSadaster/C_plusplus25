#include <iostream>
#include <string>
using namespace std;

// Base Class
class Car {
protected:
    string model;
    int year;
    float price;

public:
    virtual ~Car() {} // Virtual destructor to get overridden in derived classes
    // Input basic attributes
    void inputBasic() {
        cin.ignore(); // Ignore leftover newline
        cout << "Enter model: ";
        getline(cin, model);
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price; }

    // Display basic attributes
    void displayBasic() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price; }

    virtual void input() = 0; // to be overridden
    virtual void display() const = 0; // same as above
};

// Derived class: ElectricCar
class ElectricCar : public Car {
private:
    float batterySize;

public:
    ~ElectricCar() override {
        cout << "Destroying electric car: " << model << endl; }

    void input() override {
        inputBasic();
        cout << "Enter battery size (kWh): ";
        cin >> batterySize; }

    void display() const override {
        displayBasic();
        cout << ", Battery Size: " << batterySize << " kWh" << endl; }
};

// Derived class: GasCar
class GasCar : public Car {
private:
    float fuelCapacity;

public:
    ~GasCar() override {
        cout << "Destroying gas car: " << model << endl; }

    void input() override {
        inputBasic();
        cout << "Enter fuel capacity (liters): ";
        cin >> fuelCapacity; }

    void display() const override {
        displayBasic();
        cout << ", Fuel Capacity: " << fuelCapacity << " liters" << endl; }
};

// Derived class: HybridCar
class HybridCar : public Car {
private:
    float batterySize;
    float fuelCapacity;

public:
    ~HybridCar() override {
        cout << "Destroying hybrid car: " << model << endl; }

    void input() override {
        inputBasic();
        cout << "Enter battery size (kWh): ";
        cin >> batterySize;
        cout << "Enter fuel capacity (liters): ";
        cin >> fuelCapacity; }

    void display() const override {
        displayBasic();
        cout << ", Battery Size: " << batterySize << " kWh, Fuel Capacity: " << fuelCapacity << " liters" << endl; }
};

int main() {
    int n;
    cout << "Enter the number of cars: ";
    cin >> n;

    // Dynamic arrays
    Car** MultCars = new Car*[n];
    int* typeCodes = new int[n];

    // Input loop
    for (int i = 0; i < n; ++i) {
        int type;
        cout << "Car " << i + 1 << " type:\n[1] Electric \n[2] Gasoline\n[3] Hybrid\nEnter type: ";
        cin >> type;
        typeCodes[i] = type;

        switch (type) {
        case 1:
            MultCars[i] = new ElectricCar();
            break;
        case 2:
            MultCars[i] = new GasCar();
            break;
        case 3:
            MultCars[i] = new HybridCar();
            break;
        default:
            cout << "Invalid type! Defaulting to Hybrid." << endl; //Hybrid because it has all features
            MultCars[i] = new HybridCar();
            break;
        }
        MultCars[i]->input();
    }

    // Display loop
    cout << "\n--- Fleet information ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "Car " << i + 1 << ": ";
        switch (typeCodes[i]) {
        case 1:
            static_cast<ElectricCar*>(MultCars[i])->display();
            break;
        case 2:
            static_cast<GasCar*>(MultCars[i])->display();
            break;
        case 3:
            static_cast<HybridCar*>(MultCars[i])->display();
            break;
        default:
            cout << "Unknown car type!" << endl;
            break;
        }
    }

    // Cleanup loop
    cout << "\n--- Destroying fleet ---" << endl;
    for (int i = 0; i < n; ++i) {
        delete MultCars[i]; }

    delete[] MultCars;
    delete[] typeCodes;

    return 0;
}