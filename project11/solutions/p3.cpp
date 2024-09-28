#include <iostream>

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Max of 3 and 7: " << findMax(3, 7) << std::endl;
    std::cout << "Max of 2.5 and 3.8: " << findMax(2.5, 3.8) << std::endl;

    return 0;
}
