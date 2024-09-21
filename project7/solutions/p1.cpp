#include <iostream>
using namespace std;

// Write a function to reverse a given string using pointers.

void reverse (char* ptstr)
{
    char* ptstart;
    char* ptend;
    ptstart = ptstr;
    ptend = ptstr;

    // setting ptend to the last address of the array
    while (*ptend != '\0'){
        ptend+=1;
    }
    ptend-=1;

    // Swaping 

    while (ptstart != ptend){
        char temp = *ptstart;
        *ptstart = *ptend;
        *ptend = temp;
        ptstart += 1;
        ptend -= 1; 
    }



}


int main()
{
    char name[] = {'a','b','c'};
    reverse(name);
    return 0;
}

