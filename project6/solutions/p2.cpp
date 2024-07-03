#include <iostream>
using namespace std;

// Define the Rectangle structure
struct Rectangle {
    float length;
    float width;
};

// Function to calculate area of a rectangle
float calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    Rectangle rect;
    cout << "Enter length of the rectangle: ";
    cin >> rect.length;
    cout << "Enter width of the rectangle: ";
    cin >> rect.width;

    // Calculate and display area
    float area = calculateArea(rect);
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
