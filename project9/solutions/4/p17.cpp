#include <iostream>
using namespace std;

class Parent1 {
public:
    Parent1() {
        cout << "Parent1 Constructor called" << endl;
    }
    
    ~Parent1() {
        cout << "Parent1 Destructor called" << endl;
    }
};

class Parent2 {
public:
    Parent2() {
        cout << "Parent2 Constructor called" << endl;
    }
    
    ~Parent2() {
        cout << "Parent2 Destructor called" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    Child() {
        cout << "Child Constructor called" << endl;
    }
    
    ~Child() {
        cout << "Child Destructor called" << endl;
    }
};

int main() {
    Child c;
    return 0;
}
