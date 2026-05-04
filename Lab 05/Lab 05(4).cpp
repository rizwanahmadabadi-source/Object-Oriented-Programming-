#include <iostream>
using namespace std;

// Base Class 1
class Printer {
public:
    void print_document() {
        cout << "Printing document..." << endl;
    }
};

// Base Class 2
class Scanner {
public:
    void scan_document() {
        cout << "Scanning document..." << endl;
    }
};

// Derived Class (Multiple Inheritance)
class Photocopier : public Printer, public Scanner {
public:
    void photocopy() {
        cout << "Starting photocopy process..." << endl;
        print_document();   // from Printer
        scan_document();    // from Scanner
        cout << "Photocopy completed." << endl;
    }
};

// Main Function
int main() {
    Photocopier p;

    p.print_document();
    p.scan_document();
    p.photocopy();

    return 0;
}
