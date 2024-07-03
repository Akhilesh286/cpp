#include <iostream>
using namespace std;

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a date is valid
bool isValidDate(Date d) {
    if (d.month < 1 || d.month > 12)
        return false;
    if (d.day < 1)
        return false;
    if (d.month == 2) {
        if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
            return d.day <= 29;
        } else {
            return d.day <= 28;
        }
    } else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) {
        return d.day <= 30;
    } else {
        return d.day <= 31;
    }
}

int main() {
    Date date;
    cout << "Enter a date (day month year): ";
    cin >> date.day >> date.month >> date.year;

    // Check if the entered date is valid
    if (isValidDate(date)) {
        cout << "Valid date!" << endl;
    } else {
        cout << "Invalid date!" << endl;
    }

    return 0;
}
