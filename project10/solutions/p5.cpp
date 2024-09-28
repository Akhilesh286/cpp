#include <iostream>
#include <stdexcept>

class InvalidAgeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid age. Age must be between 0 and 150.";
    }
};

void checkAge(int age) {
    if (age < 0 || age > 150) {
        throw InvalidAgeException();
    }
    std::cout << "Valid age" << std::endl;
}

int main() {
    try {
        checkAge(200);
    } catch (const InvalidAgeException& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
