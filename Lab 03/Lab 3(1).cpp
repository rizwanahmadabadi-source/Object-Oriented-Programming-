#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Setter for name
    void setName(string n) {
        if (n != "")
            name = n;
        else
            cout << "Invalid name!" << endl;
    }

    // Setter for price
    void setPrice(double p) {
        if (p > 0)
            price = p;
        else
            cout << "Invalid price!" << endl;
    }

    // Setter for quantity
    void setQuantity(int q) {
        if (q >= 0)
            quantity = q;
        else
            cout << "Invalid quantity!" << endl;
    }

    // Getters
    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }
};

// Main function
int main() {
    Product p;

    p.setName("Laptop");
    p.setPrice(75000);
    p.setQuantity(5);

    cout << "Product Details:" << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Price: " << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}
