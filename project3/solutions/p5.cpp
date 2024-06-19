#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    bool isPrime = true;

    cout << "Enter an integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        while (i <= n / 2) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
