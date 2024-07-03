#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0; // Count of non-zero elements

    // Traverse the array. If the element encountered is non-zero, then replace the element at index 'count' with this element.
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // here count is incremented
        }
    }

    // Now all non-zero elements have been shifted to front and 'count' is set to the index of first 0. Make all elements 0 from count to end.
    while (count < n) {
        arr[count++] = 0;
    }

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
