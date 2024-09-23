#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal Constructor called" << endl;
    }
    
    ~Animal() {
        cout << "Animal Destructor called" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog Constructor called" << endl;
    }
    
    ~Dog() {
        cout << "Dog Destructor called" << endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        cout << "Cat Constructor called" << endl;
    }
    
    ~Cat() {
        cout << "Cat Destructor called" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    return 0;
}
