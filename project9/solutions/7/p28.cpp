#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function." << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = static_cast<Base*>(&derivedObj); // Static casting
    basePtr->show();

    // Casting back to Derived
    Derived* derivedPtr = static_cast<Derived*>(basePtr);
    derivedPtr->display();

    return 0;
}
