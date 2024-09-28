#include <iostream>

template <typename T>
T sum(T value) {
    return value;
}

template <typename T, typename... Args>
T sum(T first, Args... args) {
    return first + sum(args...);
}

int main() {
    std::cout << "Sum of 1, 2, 3, 4, 5: " << sum(1, 2, 3, 4, 5) << std::endl;
    std::cout << "Sum of 2.5, 3.5: " << sum(2.5, 3.5) << std::endl;

    return 0;
}
