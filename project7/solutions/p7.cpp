#include <iostream>
using namespace std;

// Function to calculate the length of a C-style string
int getStringLength(const char* str) {
    int length = 0;
    while (*(str + length) != '\0') { // Traverse the string until the null terminator
        length++;
    }
    return length;
}

// Function to concatenate two strings using pointers
void concatenate(char* destination, const char* source) {
    // Move the pointer to the end of the destination string
    while (*destination != '\0') {
        destination++;
    }

    // Copy characters from source to destination
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }

    // Add null terminator at the end of the concatenated string
    *destination = '\0';
}

int main() {
    // Define two strings with sufficient size
    char str1[100], str2[100];

    // Input first string
    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    // Input second string
    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // Concatenate the second string to the first string
    concatenate(str1, str2);

    // Display the concatenated result
    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
