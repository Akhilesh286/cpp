#include <iostream>
using namespace std;

int main() {
    int n, targetSum;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> targetSum;

    cout << "Pairs that add up to " << targetSum << " are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                cout << "(" << arr[i] << ", " << arr[j] << ") ";
            }
        }
    }
    cout << endl;

    return 0;
}
