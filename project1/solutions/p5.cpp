#include <iostream>
using namespace std;

int main() {
    int signedPos, signedNeg;
    unsigned int unsignedPos, unsignedNeg;

    // Input positive and negative integers
    cout << "Enter a positive integer: ";
    cin >> signedPos;
    cout << "Enter a negative integer: ";
    cin >> signedNeg;

    // Assign to unsigned variables
    unsignedPos = signedPos;
    unsignedNeg = signedNeg;

    // Display values
    cout << "Signed positive integer: " << signedPos << endl;
    cout << "Signed negative integer: " << signedNeg << endl;
    cout << "Unsigned positive integer: " << unsignedPos << endl;
    cout << "Unsigned negative integer: " << unsignedNeg << endl; // Watch for overflow behavior

    return 0;
}
