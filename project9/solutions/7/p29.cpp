#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animal = new Cat(); // Base pointer to derived object

    // Dynamic casting
    Cat* catPtr = dynamic_cast<Cat*>(animal);
    if (catPtr) {
        catPtr->sound(); // Output: Cat meows.
    } else {
        cout << "Dynamic cast failed." << endl;
    }

    delete animal;
    return 0;
}
