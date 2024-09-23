#include <iostream>
#include <cstring>
using namespace std;

class Employee {
protected:
    char name[50];
    int id;

public:
    Employee(const char* name = "", int id = 0) {
        strcpy(this->name, name);
        this->id = id;
    }

    virtual ~Employee() {}

    Employee& operator=(const Employee& other) {
        if (this != &other) {
            strcpy(this->name, other.name);
            this->id = other.id;
        }
        return *this;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(const char* name = "", int id = 0, int teamSize = 0) : Employee(name, id), teamSize(teamSize) {}

    Manager& operator=(const Manager& other) {
        if (this != &other) {
            Employee::operator=(other); // Copy base class
            this->teamSize = other.teamSize; // Copy derived class
        }
        return *this;
    }
};

int main() {
    Manager m1("Alice", 101, 5);
    Manager m2;
    m2 = m1; // Using overloaded assignment operator

    return 0;
}
