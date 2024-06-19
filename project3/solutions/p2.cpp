#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    int i = n;
    do {
        factorial *= i;
        i--;
    } while (i > 0);

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
