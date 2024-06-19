#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter an integer (negative number to exit): ";
        cin >> num;
        if (num < 0) {
            break;
        }
        cout << "You entered: " << num << endl;
    } while (true);

    cout << "Program terminated due to negative input." << endl;

    return 0;
}
