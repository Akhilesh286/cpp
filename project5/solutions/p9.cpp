#include <iostream>
using namespace std;

// Function to calculate sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Calling the sumOfDigits function
    int result = sumOfDigits(num);

    // Displaying the result
    cout << "Sum of digits of " << num << " is: " << result << endl;

    return 0;
}
