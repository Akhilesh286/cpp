#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}
