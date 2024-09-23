#include <iostream>
using namespace std;

class Shape {
public:
    string color;

    Shape(string c) : color(c) {}

    virtual void display() {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape {
public:
    double radius;

    Circle(string c, double r) : Shape(c), radius(r) {}

    void display() {
        Shape::display();
        cout << "Radius: " << radius << endl;
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
public:
    double length, width;

    Rectangle(string c, double l, double w) : Shape(c), length(l), width(w) {}

    void display() {
        Shape::display();
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Circle circle("Red", 5.0);
    Rectangle rectangle("Blue", 4.0, 6.0);

    circle.display();
    rectangle.display();

    return 0;
}
