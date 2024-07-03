#include <iostream>
using namespace std;

// Function to print the sum of two integers
void printSum(int a, int b) {
    cout << "The sum is: " << a + b << endl;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the printSum function with the user-inputted values
    printSum(num1, num2);

    return 0;
}
