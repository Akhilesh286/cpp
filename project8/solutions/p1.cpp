#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1 = {"Toyota", "Camry", 2020};
    Car car2 = {"Honda", "Civic", 2019};

    car1.displayInfo();
    car2.displayInfo();
    return 0;
}
