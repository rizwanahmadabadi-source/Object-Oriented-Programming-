#include <iostream>
using namespace std;

class Locker {
public:
    // Constructor
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }

    // Destructor
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() {

    cout << "Block Scope Object:\n";
    {
        Locker l1;  // created on stack
    } // destructor automatically called here

    cout << "\nDynamic Object:\n";
    Locker* l2 = new Locker(); // created on heap

    delete l2; // destructor called manually

    return 0;
}
