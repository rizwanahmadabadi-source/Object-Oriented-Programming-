#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
};

class Student {
    Calculator* calc; // Reference (Aggregation)

public:
    Student(Calculator* c) {
        calc = c;
    }

    void doAddition(int a, int b) {
        cout << "Addition: " << calc->add(a, b) << endl;
    }

    void doMultiplication(int a, int b) {
        cout << "Multiplication: " << calc->multiply(a, b) << endl;
    }
};

int main() {
    Calculator sharedCalc; // Created externally

    Student s1(&sharedCalc);
    Student s2(&sharedCalc);

    s1.doAddition(2, 3);
    s2.doMultiplication(4, 5);

    return 0;
}
