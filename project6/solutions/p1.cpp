#include <iostream>
#include <string>
using namespace std;

// Define the Student structure
struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    // Create an array of 5 Student structures
    Student students[5];

    // Input details for each student
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Display details of all students
    cout << "\nDetails of all students:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i + 1 << ": " << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl << endl;
    }

    return 0;
}
