#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle." << endl;
    }
};

int main() {
    // Upcasting
    Shape* shapePtr = new Rectangle(); // Safe upcasting
    shapePtr->draw(); // Output: Drawing Rectangle.

    // Downcasting
    Rectangle* rectPtr = dynamic_cast<Rectangle*>(shapePtr);
    if (rectPtr) {
        rectPtr->draw(); // Output: Drawing Rectangle.
    } else {
        cout << "Downcast failed." << endl;
    }

    delete shapePtr;
    return 0;
}
