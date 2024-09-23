#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

void displayShape(Shape& shape) { // Using reference to prevent slicing
    shape.draw();
}

int main() {
    Circle circle;
    displayShape(circle); // Output: Drawing Circle

    return 0;
}
