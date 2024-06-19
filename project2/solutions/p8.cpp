#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int min = (num1 < num2) ? num1 : num2;
    cout << "The minimum value is: " << min << endl;

    return 0;
}
