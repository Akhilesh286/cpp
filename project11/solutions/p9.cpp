#include <iostream>

template <typename T>
class Base1 {
public:
    T value1;
    Base1(T v1) : value1(v1) {}
    void display1() { std::cout << "Value1: " << value1 << std::endl; }
};

template <typename T>
class Base2 {
public:
    T value2;
    Base2(T v2) : value2(v2) {}
    void display2() { std::cout << "Value2: " << value2 << std::endl; }
};

template <typename T1, typename T2>
class Derived : public Base1<T1>, public Base2<T2> {
public:
    Derived(T1 v1, T2 v2) : Base1<T1>(v1), Base2<T2>(v2) {}
    void display() {
        this->display1();
        this->display2();
    }
};

int main() {
    Derived<int, double> d(10, 20.5);
    d.display();

    return 0;
}
