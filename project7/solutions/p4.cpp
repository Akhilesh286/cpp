#include <iostream>
using namespace std;

void sorting (int size, int* arr)
{
    int* ptstart = arr;
    int* ptnext = arr+1;

    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-1;j++)
        {
            cout << *ptstart << *ptnext << endl;
            if (*ptstart > *ptnext)
            {
                int temp = *ptstart;
                *ptstart = *ptnext;
                *ptnext = temp;
            }
            ptstart++;
            ptnext++;
        }
        ptstart = arr;
        ptnext = arr+1;

    }
}


int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    sorting(9,arr);
    for (int i:arr )
    {
        cout << i << endl;
    }
    return 0;
}

