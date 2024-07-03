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

    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int length = 1;
        int current = arr[i];

        for (int j = i + 1; j < n; j++) {
            if (arr[j] == current + 1) {
                length++;
                current = arr[j];
            }
        }

        if (length > maxLength) {
            maxLength = length;
        }
    }

    cout << "The length of the longest consecutive sequence is: " << maxLength << endl;

    return 0;
}
