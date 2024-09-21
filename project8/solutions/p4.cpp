#include <iostream>
using namespace std;

class Box {
private:
    int height, width, depth;

public:
    Box(int h, int w, int d) : height(h), width(w), depth(d) {}

    friend int calculateVolume(Box);
};

int calculateVolume(Box b) {
    return b.height * b.width * b.depth;
}

int main() {
    Box box(5, 4, 3);
    cout << "Volume: " << calculateVolume(box) << endl;
    return 0;
}
