#include <iostream>
#include <string>
using namespace std;

// Define the Student structure
struct Student {
    string name;
    int rollNumber;
    float marks;
};

// Function to add a new student to the database
void addStudent(Student students[], int& count) {
    if (count < 10) {
        cout << "Enter details for student " << count + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[count].name;
        cout << "Roll Number: ";
        cin >> students[count].rollNumber;
        cout << "Marks: ";
        cin >> students[count].marks;
        count++;
    } else {
        cout << "Database full! Cannot add more students." << endl;
    }
}

// Function to display details of all students
void displayStudents(Student students[], int count) {
    if (count == 0) {
        cout << "No students in the database." << endl;
    } else {
        cout << "Details of all students:" << endl;
        for (int i = 0; i < count; ++i) {
            cout << "Student " << i + 1 << ": " << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Marks: " << students[i].marks << endl << endl;
        }
    }
}

// Function to find student with highest marks
void findTopStudent(Student students[], int count) {
    if (count == 0) {
        cout << "No students in the database." << endl;
    } else {
        int maxIndex = 0;
        for (int i = 1; i < count; ++i) {
            if (students[i].marks > students[maxIndex].marks) {
                maxIndex = i;
            }
        }
        cout << "Student with highest marks:" << endl;
        cout << "Name: " << students[maxIndex].name << endl;
        cout << "Roll Number: " << students[maxIndex].rollNumber << endl;
        cout << "Marks: " << students[maxIndex].marks << endl;
    }
}

int main() {
    Student students[10];
    int count = 0;
    int choice;

    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Add a student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Find student with highest marks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                findTopStudent(students, count);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter again." << endl;
        }
    } while (choice != 4);

    return 0;
}
