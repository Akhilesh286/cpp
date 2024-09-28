#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> data;
public:
    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        }
    }

    T top() const {
        if (!data.empty()) {
            return data.back();
        }
        throw std::out_of_range("Stack is empty");
    }

    bool isEmpty() const {
        return data.empty();
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << std::endl;
    s.pop();
    std::cout << "Top after pop: " << s.top() << std::endl;

    return 0;
}
