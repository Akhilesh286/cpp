#include <iostream>
using namespace std;

class Bird {
public:
    Bird() {
        cout << "Bird Constructor called" << endl;
    }
};

class Fish {
public:
    Fish() {
        cout << "Fish Constructor called" << endl;
    }
};

class Penguin : public Bird, public Fish {
public:
    Penguin() {
        cout << "Penguin Constructor called" << endl;
    }
};

int main() {
    Penguin p;
    return 0;
}
