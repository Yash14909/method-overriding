#include <iostream>
using namespace std;

// Base class
class base {
public:
    // Regular member function (not virtual)
    int display() {
        cout << "Display Base" << endl;
        return 0;
    }

    // Virtual function allows runtime polymorphism
    virtual int show() {
        cout << "Show Base" << endl;
        return 0;
    }
};

// Derived class
class derived : public base {
public:
    // Corrected: Removed 'override' since base::display is not virtual
    int display() {
        cout << "Display Derived" << endl;
        return 0;
    }

    // Overriding virtual function — this is valid
    int show() override {
        cout << "Show Derived" << endl;
        return 0;
    }
};

// Entry point
int main() {
    base b;
    derived d;
    base* bptr;

    cout << "bptr points to base" << endl;
    bptr = &b;
    bptr->display();  // Calls base::display (not virtual)
    bptr->show();     // Calls base::show (virtual)

    cout << "bptr points to derived" << endl;
    bptr = &d;
    bptr->display();  // Still calls base::display (non-virtual, resolved by pointer type)
    bptr->show();     // Calls derived::show (virtual)

    return 0;
}
