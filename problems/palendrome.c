#include <iostream>
#include <string>

using namespace std;


int isPalindrom (const string& str)
{
    string revstr;
    for (int i=str.length()-1; i>=0 ;i--)
        revstr += str[i];
    cout << revstr << endl;
    return str == revstr ? 1 : 0;
}

int main() {
    cout << isPalindrom("racecar") << endl;
    return 0;
}
