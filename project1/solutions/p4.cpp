#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap the values
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
