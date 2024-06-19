#include <iostream>
using namespace std;

int main() {
    int side;

    cout << "Enter side length: ";
    cin >> side;

    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; j++) {
            if (i == 1 || i == side || j == 1 || j == side) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
