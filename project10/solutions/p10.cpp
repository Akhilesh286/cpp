#include <iostream>
#include <stdexcept>

void innerFunction() {
    throw std::runtime_error("Error in inner function");
}

void outerFunction() {
    try {
        innerFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught in outer function: " << e.what() << std::endl;
        throw; // re-throw the exception
    }
}

int main() {
    try {
        outerFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
