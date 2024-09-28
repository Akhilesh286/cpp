#include <iostream>
#include <fstream>
#include <stdexcept>

void openFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        throw std::runtime_error("File cannot be opened");
    }
    std::cout << "File opened successfully" << std::endl;
}

int main() {
    try {
        openFile("nonexistent.txt");
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
