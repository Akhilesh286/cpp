#include <iostream>
#include <cmath>
#include <stdexcept>

double squareRoot(double num) {
    if (num < 0) {
        throw std::invalid_argument("Negative input for square root");
    }
    return std::sqrt(num);
}

int main() {
    try {
        double result = squareRoot(-9);
        std::cout << "Square root: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
