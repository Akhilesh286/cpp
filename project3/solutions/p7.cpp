#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0, digit;

    cout << "Enter an integer: ";
    cin >> n;

    do {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    } while (n != 0);

    cout << "Reversed number: " << reverse << endl;

    return 0;
}
