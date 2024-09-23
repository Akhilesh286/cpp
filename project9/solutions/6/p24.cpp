#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks!" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Animal* animal = new Dog(); // Base pointer to derived object
    animal->speak(); // Output: Dog barks!

    delete animal;
    return 0;
}
