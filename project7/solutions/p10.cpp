#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;      // Pointer to hold the array
    int top;       // Pointer to track the top of the stack
    int capacity;  // Maximum size of the stack

public:
    // Constructor to initialize the stack
    Stack(int size) {
        arr = new int[size];  // Dynamically allocate memory for the array
        capacity = size;
        top = -1;             // Stack is empty initially
    }

    // Destructor to free the allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Function to add an element to the stack
    void push(int x) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push " << x << endl;
            return;
        }
        arr[++top] = x;  // Add element to the top of the stack
        cout << "Pushed " << x << " to the stack." << endl;
    }

    // Function to remove the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop." << endl;
            return;
        }
        cout << "Popped " << arr[top--] << " from the stack." << endl;
    }

    // Function to get the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];  // Return the top element
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    // Create a stack of size 5
    Stack stack(5);

    // Push elements to the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    // Try pushing to a full stack
    stack.push(60);

    // Display the top element
    cout << "Top element is: " << stack.peek() << endl;

    // Pop elements from the stack
    stack.pop();
    stack.pop();
    stack.pop();

    // Display the top element again
    cout << "Top element is: " << stack.peek() << endl;

    return 0;
}
