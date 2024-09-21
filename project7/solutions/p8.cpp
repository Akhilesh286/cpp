#include <iostream>
using namespace std;

void swap (int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}



int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,0};
    int size = 5;
    for ( int i=0; i<size; i++ )
    {
        swap((arr1+i),(arr2+i));
    }

    for ( int i=0; i<size; i++ )
    {
        cout << "[" << *(arr1+i) << "][" << *(arr2+i) << "]" << endl;
    }

    return 0;
}

