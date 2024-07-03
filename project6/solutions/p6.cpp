#include <iostream>
using namespace std;

// Define the Circle structure
struct Circle {
    float radius;
};

// Function to calculate area of a circle
float calculateArea(Circle c) {
    return 3.14159 * c.radius * c.radius;
}

// Function to calculate circumference of a circle
float calculateCircumference(Circle c) {
    return 2 * 3.14159 * c.radius;
}

int main() {
    Circle circle;
    cout << "Enter radius of the circle: ";
    cin >> circle.radius;

    // Calculate and display area
    float area = calculateArea(circle);
    cout << "Area of the circle: " << area << endl;

    // Calculate and display circumference
    float circumference = calculateCircumference(circle);
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
