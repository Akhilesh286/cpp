#include <iostream>
#include <new>

int main() {
    try {
        int* arr = new int[100000000000];
        delete[] arr;
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory allocation failed: " << e.what() << std::endl;
    }
    return 0;
}
