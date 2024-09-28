
# Operator Overloading in C++

## Overview
Operator overloading in C++ allows you to redefine the behavior of operators for user-defined types (classes). It makes your code more intuitive and allows your custom types to interact in a way similar to built-in types. This document will guide you through the standard ways of operator overloading, explore various use cases, and provide problems for practice.

### Why Use Operator Overloading?
- **Intuitive Code**: Custom types can interact with operators like `+`, `-`, `[]`, etc., making the code more readable.
- **Better Abstraction**: Helps encapsulate complex logic into familiar operators.
- **Flexibility**: Can be used with user-defined types like classes and structs.

### Standard Way of Operator Overloading
- **Syntax**:
  ```cpp
  return_type operator operator_symbol (parameters) {
      // Operator logic
  }
  ```

- **Example (Overloading `+` operator)**:
  ```cpp
  class Complex {
      double real, imag;

  public:
      Complex(double r = 0, double i = 0) : real(r), imag(i) {}

      // Overloading the '+' operator
      Complex operator+(const Complex& other) {
          return Complex(real + other.real, imag + other.imag);
      }

      void display() const {
          std::cout << real << " + " << imag << "i" << std::endl;
      }
  };
  ```

- **Explanation**: In the example above, we overloaded the `+` operator to add two `Complex` numbers by summing their real and imaginary parts.

### Types of Operator Overloading
1. **Unary Operators**: These operate on a single operand.
   - Examples: `!`, `-`, `++`, `--`
   - Example (Overloading the unary `-` operator):
     ```cpp
     class Point {
         int x, y;

     public:
         Point(int x = 0, int y = 0) : x(x), y(y) {}

         // Overload unary minus (-)
         Point operator-() const {
             return Point(-x, -y);
         }

         void display() const {
             std::cout << "(" << x << ", " << y << ")" << std::endl;
         }
     };
     ```

2. **Binary Operators**: These operate on two operands.
   - Examples: `+`, `-`, `*`, `/`, `==`, `!=`
   - Example (Overloading the `==` operator):
     ```cpp
     class Point {
         int x, y;

     public:
         Point(int x = 0, int y = 0) : x(x), y(y) {}

         // Overload equality (==) operator
         bool operator==(const Point& other) const {
             return (x == other.x && y == other.y);
         }

         void display() const {
             std::cout << "(" << x << ", " << y << ")" << std::endl;
         }
     };
     ```

3. **Assignment Operators**: You can overload the assignment `=` operator for deep copy of class members.
   - Example (Overloading the `=` operator):
     ```cpp
     class String {
         char* str;

     public:
         String(const char* s = "") {
             str = new char[strlen(s) + 1];
             strcpy(str, s);
         }

         // Overload assignment operator
         String& operator=(const String& other) {
             if (this != &other) {
                 delete[] str;
                 str = new char[strlen(other.str) + 1];
                 strcpy(str, other.str);
             }
             return *this;
         }

         ~String() {
             delete[] str;
         }

         void display() const {
             std::cout << str << std::endl;
         }
     };
     ```

### Restrictions on Operator Overloading
- Some operators cannot be overloaded:
  - **`::` (Scope Resolution Operator)**
  - **`.*` (Pointer-to-member Operator)**
  - **`.` (Dot Operator)**
  - **`?:` (Ternary Operator)**
  
- You can’t change the precedence or associativity of operators through overloading.

### Different Ways of Operator Overloading
1. **Member Function Overloading**: The overloaded operator is a member of the class.
   - **Example**: 
     ```cpp
     Complex operator+(const Complex& other);  // Member function
     ```

2. **Non-Member Function Overloading**: The overloaded operator is a non-member function (typically used when you need to allow conversions for the first operand).
   - **Example**:
     ```cpp
     Complex operator+(const Complex& lhs, const Complex& rhs);  // Non-member function
     ```

3. **Friend Function Overloading**: Use friend functions for binary operators when the left-hand operand is not a class object.
   - **Example**:
     ```cpp
     class Complex {
         double real, imag;

     public:
         Complex(double r = 0, double i = 0) : real(r), imag(i) {}

         // Declare friend function to overload `+`
         friend Complex operator+(const Complex& lhs, const Complex& rhs);

         void display() const {
             std::cout << real << " + " << imag << "i" << std::endl;
         }
     };

     Complex operator+(const Complex& lhs, const Complex& rhs) {
         return Complex(lhs.real + rhs.real, lhs.imag + rhs.imag);
     }
     ```

### Problems for Practicing Operator Overloading

#### Problem 1: Overload the `[]` Operator for Array-like Behavior
**Description**: Create a class that stores an array and overloads the `[]` operator to access its elements like a normal array.

**Solution**:
<details>
<summary>code</summary>

```cpp
#include <iostream>
class Array {
    int arr[5];

public:
    Array() {
        for (int i = 0; i < 5; ++i) arr[i] = i + 1;
    }

    int operator[](int index) const {
        if (index < 0 || index >= 5) {
            std::cerr << "Index out of bounds!" << std::endl;
            return -1;
        }
        return arr[index];
    }
};

int main() {
    Array a;
    std::cout << "Element at index 2: " << a[2] << std::endl;
    std::cout << "Element at index 5: " << a[5] << std::endl;  // Out of bounds
    return 0;
}
```

</details>

**Explanation**: This overload allows accessing elements of a class like an array using the `[]` operator.

---

#### Problem 2: Overload the `<<` Operator for Custom Output
**Description**: Overload the `<<` operator to print objects of a class using `std::cout`.

**Solution**:

<details>
<summary>code</summary>

```cpp
#include <iostream>
class Point {
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload the << operator
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Point p(3, 4);
    std::cout << "Point p: " << p << std::endl;
    return 0;
}
```

</details>

**Explanation**: The `<<` operator is overloaded to print the object in a custom format.

---

#### Problem 3: Overload the `++` Operator for Pre and Post Increment
**Description**: Overload both pre-increment and post-increment for a class that stores a counter.

**Solution**:

<details>
<summary>code</summary>

```cpp
#include <iostream>
class Counter {
    int count;

public:
    Counter(int count = 0) : count(count) {}

    // Pre-increment
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Post-increment
    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }

    void display() const {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c(5);
    ++c;
    c.display();  // Pre-increment: 6

    c++;
    c.display();  // Post-increment: 7

    return 0;
}
```
**Explanation**: This overload defines both the pre-increment (`++c`) and post-increment (`c++`) behavior.

</details>

---
