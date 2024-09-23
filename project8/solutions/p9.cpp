#include <iostream>
using namespace std;

class Address {
public:
    string street;
    string city;

    Address(string s, string c) : street(s), city(c) {}
};

class Person {
public:
    string name;
    Address address;

    Person(string n, string s, string c) : name(n), address(s, c) {}

    void display() {
        cout << "Name: " << name << ", Address: " << address.street << ", " << address.city << endl;
    }
};

int main() {
    Person p("John Doe", "123 Main St", "Anytown");
    p.display();
    return 0;
}
