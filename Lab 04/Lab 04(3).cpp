#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default Constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Parameterized Constructor (2 values)
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Single-Parameter Constructor (Square)
    Rectangle(float side) {
        length = side;
        width = side;
    }

    // Area Method
    float area() {
        return length * width;
    }

    // Display Method
    void display() {
        cout << "Length: " << length << ", Width: " << width;
        cout << ", Area: " << area() << endl;
    }
};

int main() {
    // Using all constructors
    Rectangle r1;           // default
    Rectangle r2(5.0, 3.0); // parameterized
    Rectangle r3(4.0);      // square

    cout << "Rectangle 1:\n";
    r1.display();

    cout << "Rectangle 2:\n";
    r2.display();

    cout << "Rectangle 3 (Square):\n";
    r3.display();

    return 0;
}
