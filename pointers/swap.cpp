#include <iostream>
#include <string>
using namespace std;


void swap (int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}


int main(int argc, char **argv) {

    int a,b;
    a = 20;
    b = 10;

    // int *ptr;

    // ptr = &a;
    // a = b;
    // b = *ptr;

    swap(&a,&b);

    cout << "a:" << a << "  b:" << b << endl;

    cout << "Hello, World!" << endl;
    return 0;
}
