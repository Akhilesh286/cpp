#include <iostream>
using namespace std;

void reverse (int size,int* arr)
{
    int* ptstart = arr;
    int* ptend = arr+(size-1);

    while (ptstart < ptend)
    {
        int temp = *ptstart;
        *ptstart = *ptend;
        *ptend = temp;

        ptstart++;
        ptend--;
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    reverse(4,arr);
    for (int i:arr )
        cout << i << endl;
    return 0;
}

