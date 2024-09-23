#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    int speed;

    Vehicle(string b, int s) : brand(b), speed(s) {}

    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    string fuelType;

    Car(string b, int s, string f) : Vehicle(b, s), fuelType(f) {}

    void display() {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class ElectricCar : public Car {
public:
    int batteryLife;

    ElectricCar(string b, int s, string f, int bl) : Car(b, s, f), batteryLife(bl) {}

    void display() {
        Car::display();
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};

int main() {
    ElectricCar eCar("Tesla", 200, "Electric", 15);
    eCar.display();
    return 0;
}
