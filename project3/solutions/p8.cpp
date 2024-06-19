#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum of all even numbers between 1 and 100: " << sum << endl;

    return 0;
}
