#include <iostream>
#include <string>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }
};

class ColoredPoint : public Point {
public:
    string color;

    ColoredPoint(int x = 0, int y = 0, string color = "none") : Point(x, y), color(color) {}

    ColoredPoint operator+(const ColoredPoint& other) {
        return ColoredPoint(x + other.x, y + other.y, color + " & " + other.color);
    }
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
    cout << "Point: (" << p3.x << ", " << p3.y << ")" << endl;

    ColoredPoint cp1(1, 2, "red"), cp2(3, 4, "blue");
    ColoredPoint cp3 = cp1 + cp2;
    cout << "ColoredPoint: (" << cp3.x << ", " << cp3.y << ") Color: " << cp3.color << endl;

    return 0;
}
