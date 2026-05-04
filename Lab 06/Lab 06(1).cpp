#include <iostream>
using namespace std;

// Base Class
class Product {
protected:
    string name;
    double price;

public:
    Product(string n, double p) {
        name = n;
        price = p;
        cout << "Product Constructor Called\n";
    }

    void displayProduct() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

// Derived Class
class Electronics : public Product {
private:
    int warrantyYears;

public:
    // Constructor chaining
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
        cout << "Electronics Constructor Called\n";
    }

    void display() {
        displayProduct();
        cout << "Warranty: " << warrantyYears << " years\n";
    }
};

// Main
int main() {
    Electronics e1("Laptop", 1200.5, 2);
    cout << "\n--- Product Details ---\n";
    e1.display();
}
