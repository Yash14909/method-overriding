#include <iostream>
using namespace std;

class Base {
public:
    virtual int display() {
        cout << "Display Base" << endl;
        return 0;
    }

    virtual int show() {
        cout << "Show Base" << endl;
        return 0;
    }
};

class Derived : public Base {
public:
    int display() override {
        cout << "Display Derived" << endl;
        return 0;
    }

    int show() override {
        cout << "Show Derived" << endl;
        return 0;
    }
};

int main() {
    Base b;
    Derived d;
    Base* bptr;

    cout << "bptr points to Base object:" << endl;
    bptr = &b;
    bptr->display();  // Base::display
    bptr->show();     // Base::show

    cout << "bptr points to Derived object:" << endl;
    bptr = &d;
    bptr->display();  // Derived::display
    bptr->show();     // Derived::show

    return 0;
}
