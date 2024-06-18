#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNumber;
    float math, science, english, total, average;

    // Input student details
    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks for Math: ";
    cin >> math;
    cout << "Enter marks for Science: ";
    cin >> science;
    cout << "Enter marks for English: ";
    cin >> english;

    // Calculate total and average
    total = math + science + english;
    average = total / 3;

    // Display results
    cout << "\nStudent's Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
