#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

int accessArray(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return arr[index];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    try {
        int result = divide(10, 0);
        int value = accessArray(arr, 5, 10);
    } catch (const std::runtime_error& e) {
        std::cout << "Runtime error: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Out of range error: " << e.what() << std::endl;
    }
    return 0;
}
