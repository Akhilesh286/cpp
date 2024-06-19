#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    for (int i = 0; ; i++) {
        cout << "Enter an integer (negative number to stop): ";
        cin >> num;
        if (num < 0) {
            break;
        }
        if (num > 0) {
            count++;
        }
    }

    cout << "Total positive numbers entered: " << count << endl;

    return 0;
}
