#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() {
        return 0;
    }
};

class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape {
    double side;

public:
    Square(double s) : side(s) {}

    double area() override {
        return side * side;
    }
};

int main() {
    Shape *s1 = new Circle(5);
    Shape *s2 = new Square(4);

    cout << "Circle Area: " << s1->area() << endl;
    cout << "Square Area: " << s2->area() << endl;

    delete s1;
    delete s2;
    return 0;
}
