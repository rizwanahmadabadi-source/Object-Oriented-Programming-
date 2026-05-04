#include <iostream>
using namespace std;

class Display {
    int lastResult;

public:
    void show(int result) {
        lastResult = result;
        cout << "Result: " << result << endl;
    }

    int getLastResult() {
        return lastResult;
    }
};

class Calculator {
    Display d; // Composition (owned object)

public:
    void add(int a, int b) {
        int result = a + b;
        d.show(result);
    }

    void multiply(int a, int b) {
        int result = a * b;
        d.show(result);
    }

    void showLast() {
        cout << "Last Result: " << d.getLastResult() << endl;
    }
};

int main() {
    Calculator c;

    c.add(2, 3);
    c.multiply(4, 5);
    c.showLast();

    return 0;
}
