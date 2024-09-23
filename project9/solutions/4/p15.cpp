#include <iostream>
using namespace std;

class Gadget {
public:
    Gadget() {
        cout << "Gadget Constructor called" << endl;
    }
    
    virtual ~Gadget() {
        cout << "Gadget Destructor called" << endl;
    }
};

class Phone : virtual public Gadget {
public:
    Phone() {
        cout << "Phone Constructor called" << endl;
    }

    ~Phone() {
        cout << "Phone Destructor called" << endl;
    }
};

class Tablet : virtual public Gadget {
public:
    Tablet() {
        cout << "Tablet Constructor called" << endl;
    }

    ~Tablet() {
        cout << "Tablet Destructor called" << endl;
    }
};

class SmartPhone : public Phone, public Tablet {
public:
    SmartPhone() {
        cout << "SmartPhone Constructor called" << endl;
    }

    ~SmartPhone() {
        cout << "SmartPhone Destructor called" << endl;
    }
};

int main() {
    SmartPhone s;
    return 0;
}
