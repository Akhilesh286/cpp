#include <iostream>
using namespace std;

// Function to merge two sorted arrays using pointers
void mergeArrays(int* arr1, int size1, int* arr2, int size2, int* mergedArr) {
    // Pointers to traverse the arrays
    int* p1 = arr1;  // Pointer to the first element of arr1
    int* p2 = arr2;  // Pointer to the first element of arr2
    int* pMerged = mergedArr;  // Pointer to the merged array

    // Traverse both arrays and merge them
    while (p1 < arr1 + size1 && p2 < arr2 + size2) {
        if (*p1 < *p2) {
            *pMerged = *p1;
            p1++;  // Move pointer in arr1
        } else {
            *pMerged = *p2;
            p2++;  // Move pointer in arr2
        }
        pMerged++;  // Move pointer in merged array
    }

    // If there are remaining elements in arr1, copy them
    while (p1 < arr1 + size1) {
        *pMerged = *p1;
        p1++;
        pMerged++;
    }

    // If there are remaining elements in arr2, copy them
    while (p2 < arr2 + size2) {
        *pMerged = *p2;
        p2++;
        pMerged++;
    }
}

int main() {
    // Two sorted arrays
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Array to hold the merged result
    int mergedArr[size1 + size2];

    // Merge the two arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    // Output the merged array
    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}
