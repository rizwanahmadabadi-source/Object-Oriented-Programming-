#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    void input_employee() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Developer : public Employee {
private:
    string programming_language;

public:
    void input_developer() {
        cout << "Enter Programming Language: ";
        cin.ignore();
        getline(cin, programming_language);
    }

    void display_developer() {
        cout << "Programming Language: " << programming_language << endl;
    }
};

class Designer : public Employee {
private:
    string design_tool;

public:
    void input_designer() {
        cout << "Enter Design Tool: ";
        cin.ignore();
        getline(cin, design_tool);
    }

    void display_designer() {
        cout << "Design Tool: " << design_tool << endl;
    }
};

int main() {
    Developer dev;
    Designer des;

    cout << "Enter Developer Details:\n";
    dev.input_employee();
    dev.input_developer();

    cout << "\nEnter Designer Details:\n";
    des.input_employee();
    des.input_designer();

    cout << "\nDeveloper Info:\n";
    dev.display_employee();
    dev.display_developer();

    cout << "\nDesigner Info:\n";
    des.display_employee();
    des.display_designer();

    return 0;
}
