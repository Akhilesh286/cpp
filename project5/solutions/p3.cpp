#include <iostream>
using namespace std;

// Function to return the maximum of two integers
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the max function and store the result
    int result = max(num1, num2);

    // Print the result
    cout << "The maximum is: " << result << endl;

    return 0;
}

