#include <iostream>
#include <string>
#include <stdexcept>

int stringToInt(const std::string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            throw std::invalid_argument("Invalid input for integer conversion");
        }
    }
    return std::stoi(str);
}

int main() {
    try {
        int num = stringToInt("12a3");
        std::cout << "Number: " << num << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
