#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Calculating area of Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Calculating area of Circle" << endl;
    }
};

int main() {
    Circle circle;
    Shape shape = circle; // Object slicing
    shape.area(); // Output: Calculating area of Shape

    return 0;
}
