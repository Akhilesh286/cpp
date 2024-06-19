#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    for (int i = 0; ; i++) {
        cout << "Enter an integer (zero to stop): ";
        cin >> num;
        if (num == 0) {
            break;
        }
        sum += num;
    }

    cout << "Sum of the entered numbers: " << sum << endl;

    return 0;
}
