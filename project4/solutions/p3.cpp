#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array (excluding the missing number): ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++) {
        total -= arr[i];
    }

    cout << "The missing number is: " << total << endl;

    return 0;
}
