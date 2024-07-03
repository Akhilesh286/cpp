#include <iostream>
#include <string>
using namespace std;

// Define the Employee structure
struct Employee {
    int empId;
    string name;
    float basicSalary;
    float hra;
};

// Function to calculate total salary of an employee
float calculateTotalSalary(Employee emp) {
    return emp.basicSalary + emp.hra;
}

int main() {
    Employee emp;
    cout << "Enter employee details:" << endl;
    cout << "Employee ID: ";
    cin >> emp.empId;
    cout << "Name: ";
    cin >> emp.name;
    cout << "Basic Salary: ";
    cin >> emp.basicSalary;
    cout << "HRA: ";
    cin >> emp.hra;

    // Calculate and display total salary
    float totalSalary = calculateTotalSalary(emp);
    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
