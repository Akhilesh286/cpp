#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;

    // Input rectangle dimensions
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Display results
    cout << "\nArea of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
