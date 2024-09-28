#include <iostream>
using namespace std;

template<class T1, class T2>
class Pair
{
private:
    T1 val1;
    T2 val2;
public:
    void seter(T1 v1, T2 v2)
    {
        val1 = v1;
        val2 = v2;
    }
    void display()
    {
        cout << "val1: " << val1 << " val2: " << val2;
    }
};

int main()
{
    Pair<int,int> p;
    
    p.seter(10,20);
    p.display();

    return 0;
}