#include <iostream>
#include <string>

template <typename T>
bool compare(const T& a, const T& b) {
    return a == b;
}

template <>
bool compare<std::string>(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

int main() {
    std::cout << "Compare 5 and 5: " << compare(5, 5) << std::endl;
    std::cout << "Compare \"hello\" and \"world\": " << compare(std::string("hello"), std::string("world")) << std::endl;

    return 0;
}
