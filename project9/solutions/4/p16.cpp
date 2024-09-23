#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {
        cout << "Shape Constructor called" << endl;
    }
    
    ~Shape() {
        cout << "Shape Destructor called" << endl;
    }
};

class Circle : public Shape {
public:
    Circle() {
        cout << "Circle Constructor called" << endl;
    }
    
    ~Circle() {
        cout << "Circle Destructor called" << endl;
    }
};

int main() {
    Circle c;
    return 0;
}
