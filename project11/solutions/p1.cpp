#include <iostream>


template<typename Any>
void swap(Any& a, Any& b)
{
    Any c;
    c = a;
    a = b;
    b = c;
}


int main()
{
    int a = 10;
    int b = 20;

    swap(a,b);
    std::cout << a << b << std::endl;

    return 0;
}