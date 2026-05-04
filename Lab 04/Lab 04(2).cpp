#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Parameterized Constructor
    BankAccount(string accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    // Display Method
    void showAccountDetails() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string accNo, holder;
    double bal;

    // User Input
    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore(); // clear buffer

    cout << "Enter Account Holder Name: ";
    getline(cin, holder);

    cout << "Enter Balance: ";
    cin >> bal;

    // Create object using parameterized constructor
    BankAccount acc(accNo, holder, bal);

    // Display details
    acc.showAccountDetails();

    return 0;
}
