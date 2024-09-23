#include <iostream>
using namespace std;

class Device {
public:
    Device() {
        cout << "Device Constructor called" << endl;
    }

    virtual ~Device() {
        cout << "Device Destructor called" << endl;
    }
};

class Smartphone : public Device {
public:
    Smartphone() {
        cout << "Smartphone Constructor called" << endl;
    }

    ~Smartphone() {
        cout << "Smartphone Destructor called" << endl;
    }
};

class Tablet : public Device {
public:
    Tablet() {
        cout << "Tablet Constructor called" << endl;
    }

    ~Tablet() {
        cout << "Tablet Destructor called" << endl;
    }
};

int main() {
    Device *d1 = new Smartphone();
    Device *d2 = new Tablet();
    
    delete d1;
    delete d2;

    return 0;
}
