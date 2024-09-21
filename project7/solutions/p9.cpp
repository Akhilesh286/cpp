#include <iostream>
using namespace std;


int count(char* str)
{
    int nof = 0;
    char vowel[] = {'a','e','i','o','u'};
    while (*str != '\0')
    {
        if (*str == 'a' || *str ==  'e' || *str ==  'i' || *str ==  'o' || *str == 'u')
        {
            nof++;
        }
        str++;
    }
    return nof;
}


int main()
{
    char text[] = "this text has vovels in it";
    cout << count(text) << endl;
    return 0;
}

