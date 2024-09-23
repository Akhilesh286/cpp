#include <iostream>
using namespace std;

class Student {
public:
    static int totalStudents;

    Student() {
        totalStudents++;
    }

    static int getTotalStudents() {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3;
    cout << "Total Students: " << Student::getTotalStudents() << endl;
    return 0;
}

/*
1. Static Variables
Within a Class: When you declare a variable as static inside a class, it means that the variable is shared among all instances of that class. There is only one copy of the static variable, regardless of how many objects of the class are created.

Example: If you have a class Counter with a static variable count, every time you create an instance of Counter, the count variable will retain its value across instances.
Within a Function: If a variable is declared as static inside a function, it maintains its value between function calls. This means that the variable is initialized only once and retains its state for the life of the program.

2. Static Methods
Static methods belong to the class rather than any particular object of the class. They can be called without creating an instance of the class.
Static methods can only access static variables and other static methods. They cannot access instance variables or instance methods directly.
Use Case: Static methods are often used for utility functions that do not depend on object state.

*/