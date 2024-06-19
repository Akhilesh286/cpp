#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0, i = 1;

    cout << "Enter the number of terms: ";
    cin >> n;

    while (i <= n) {
        if(i == 1) {
            cout << t1 << " ";
        } else if(i == 2) {
            cout << t2 << " ";
        } else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << " ";
        }
        i++;
    }

    cout << endl;
    return 0;
}
