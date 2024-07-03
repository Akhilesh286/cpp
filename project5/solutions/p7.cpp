#include <iostream>
using namespace std;

// Function to find the N-th Fibonacci number iteratively
int nthFibonacci(int n) {
    if (n <= 1) return n;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calling the nthFibonacci function
    int result = nthFibonacci(n);

    // Displaying the result
    cout << "The " << n << "-th Fibonacci number is: " << result << endl;

    return 0;
}
