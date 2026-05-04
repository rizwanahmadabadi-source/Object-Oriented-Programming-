#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void input_person() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    string employee_id;

public:
    void input_employee() {
        cout << "Enter Employee ID: ";
        cin >> employee_id;
    }

    void display_employee() {
        cout << "Employee ID: " << employee_id << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void input_manager() {
        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, department);
    }

    void display_manager() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    // Input
    m.input_person();
    m.input_employee();
    m.input_manager();

    // Output
    cout << "\nManager Details:\n";
    m.display_person();
    m.display_employee();
    m.display_manager();

    return 0;
}
