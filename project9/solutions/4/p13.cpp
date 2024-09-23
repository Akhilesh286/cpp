#include <iostream>
using namespace std;

class Appliance {
public:
    Appliance() {
        cout << "Appliance Constructor called" << endl;
    }
    
    ~Appliance() {
        cout << "Appliance Destructor called" << endl;
    }
};

class Refrigerator : public Appliance {
public:
    Refrigerator() {
        cout << "Refrigerator Constructor called" << endl;
    }
    
    ~Refrigerator() {
        cout << "Refrigerator Destructor called" << endl;
    }
};

class Microwave : public Appliance {
public:
    Microwave() {
        cout << "Microwave Constructor called" << endl;
    }
    
    ~Microwave() {
        cout << "Microwave Destructor called" << endl;
    }
};

int main() {
    Refrigerator r;
    Microwave m;
    return 0;
}
