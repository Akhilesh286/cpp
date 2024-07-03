#include <iostream>
using namespace std;

// Function to print a pattern of asterisks
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;

    // Calling the printPattern function
    printPattern(n);

    return 0;
}
