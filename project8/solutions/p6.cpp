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
