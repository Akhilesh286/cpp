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
/*
The line `friend int calculateVolume(Box);` is a declaration of a friend function in C++. Here’s what it does:

1. **Friend Function**: It declares that `calculateVolume` is a friend function of the `Box` class. This means that `calculateVolume` can access private and protected members of `Box`, even though it is not a member of the class itself.

2. **Function Signature**: The function `calculateVolume` takes a single parameter of type `Box` and returns an `int`. The exact functionality would depend on how `calculateVolume` is defined elsewhere in the code.

In practical terms, if `Box` has private attributes (like length, width, and height), the `calculateVolume` function can directly access those attributes to calculate the volume of the box without needing public getter methods.
*/