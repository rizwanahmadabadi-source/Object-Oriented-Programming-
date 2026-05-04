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

    void display_person_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string student_id;

public:
    void input_student() {
        cout << "Enter Student ID: ";
        cin >> student_id;
    }

    void display_student_info() {
        cout << "Student ID: " << student_id << endl;
    }
};

int main() {
    Student s;

    // Input
    s.input_person();
    s.input_student();

    // Output
    cout << "\nStudent Details:\n";
    s.display_person_info();
    s.display_student_info();

    return 0;
}
