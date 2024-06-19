#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        cout << ch << " is an alphabet." << endl;
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is a digit." << endl;
    else
        cout << ch << " is a special character." << endl;

    return 0;
}
