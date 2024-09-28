#include <iostream>
#include <stdexcept>

int accessArray(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return arr[index];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    try {
        int value = accessArray(arr, 5, 6);
        std::cout << "Value: " << value << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
