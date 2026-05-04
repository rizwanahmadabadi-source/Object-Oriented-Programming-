#include <iostream>
using namespace std;

// Base Class
class Vehicle {
public:
    Vehicle(string type) {
        cout << "Vehicle Constructor: " << type << endl;
    }
};

// Derived Level 1
class Car : public Vehicle {
public:
    Car(string type, string brand) : Vehicle(type) {
        cout << "Car Constructor: " << brand << endl;
    }
};

// Derived Level 2
class ElectricCar : public Car {
public:
    ElectricCar(string type, string brand, string battery)
        : Car(type, brand) {
        cout << "ElectricCar Constructor: " << battery << endl;
    }
};

// Main
int main() {
    ElectricCar e1("4-Wheeler", "Tesla", "75kWh");
}
