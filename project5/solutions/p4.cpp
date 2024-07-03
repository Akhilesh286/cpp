#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate and return a random number between 1 and 100
int generateRandomNumber() {
    return rand() % 100 + 1;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    // Call the generateRandomNumber function and store the result
    int randomNumber = generateRandomNumber();

    // Print the result
    cout << "Generated random number: " << randomNumber << endl;

    return 0;
}
