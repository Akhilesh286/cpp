#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calling the factorial function
    int result = factorial(n);

    // Displaying the result
    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
