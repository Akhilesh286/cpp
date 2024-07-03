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

    cout << "All subarrays are:" << endl;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "[";
            for (int k = start; k <= end; k++) {
                cout << arr[k];
                if (k < end) cout << ", ";
            }
            cout << "] ";
        }
        cout << endl;
    }

    return 0;
}
