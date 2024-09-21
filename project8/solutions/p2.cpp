#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {
        cout << name << " is created." << endl;
    }

    ~Person() {
        cout << name << " is destroyed." << endl;
    }
};

int main() {
    Person p1("Alice", 30);
    Person p2("Bob", 25);
    return 0;
}
