#include <iostream>

template <typename Width = int, typename Height = int>
class Rectangle {
private:
    Width width;
    Height height;
public:
    Rectangle(Width w, Height h) : width(w), height(h) {}

    Width getWidth() const { return width; }
    Height getHeight() const { return height; }

    void display() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    Rectangle<> rect1(10, 20); // Uses default int types
    Rectangle<double, double> rect2(10.5, 20.5);

    rect1.display();
    rect2.display();

    return 0;
}
