#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 5 == 0 && number % 11 == 0)
        cout << number << " is divisible by both 5 and 11." << endl;
    else
        cout << number << " is not divisible by both 5 and 11." << endl;

    return 0;
}
