#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle Constructor called" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car Constructor called" << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike() {
        cout << "Bike Constructor called" << endl;
    }
};

int main() {
    Car c;
    Bike b;
    return 0;
}
