#include <iostream>
using namespace std;

class Shape {
public:
    virtual string info() const {
        return "Shape";
    }
};

class Circle : public Shape {
public:
    string info() const override {
        return "Circle";
    }
};

class Rectangle : public Shape {
public:
    string info() const override {
        return "Rectangle";
    }
};

ostream& operator<<(ostream& os, const Shape& shape) {
    os << shape.info();
    return os;
}

int main() {
    Circle c;
    Rectangle r;

    cout << c << endl; // Output: Circle
    cout << r << endl; // Output: Rectangle

    return 0;
}
