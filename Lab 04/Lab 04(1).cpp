#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    // Default Constructor
    Employee() {
        id = 0;
        name = "Not Assigned";
        salary = 0.0;
    }

    // Display Method
    void displayDetails() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;   // Object using default constructor
    emp.displayDetails();  // Display details
    return 0;
}


