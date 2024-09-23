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
    Animal* animal = new Dog(); // Base pointer to Dog

    // Attempting to cast to Cat
    Cat* catPtr = dynamic_cast<Cat*>(animal);
    if (catPtr) {
        catPtr->sound();
    } else {
        cout << "Dynamic cast failed. Not a Cat." << endl; // Output: Dynamic cast failed. Not a Cat.
    }

    delete animal;
    return 0;
}
