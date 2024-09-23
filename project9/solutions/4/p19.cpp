#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Class A Constructor called" << endl;
    }
    
    ~A() {
        cout << "Class A Destructor called" << endl;
    }
};

class B : public A {
private:
    int* data;
public:
    B() {
        cout << "Class B Constructor called" << endl;
        data = new int[10]; // Dynamic memory allocation
    }
    
    ~B() {
        cout << "Class B Destructor called" << endl;
        delete[] data; // Releasing dynamic memory
    }
};

int main() {
    B b;
    return 0;
}
