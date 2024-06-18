#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;

    // Input principal, rate, and time
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time in years: ";
    cin >> time;

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display result
    cout << "\nSimple Interest: " << interest << endl;

    return 0;
}
