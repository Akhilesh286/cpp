# C++ Exception Handling Practice

This section provides 10 hands-on problems to help you understand and practice exception handling in C++. Each problem is designed to cover different types of errors and various methods of handling exceptions.

## Problem 1: Division by Zero Handling
- **Objective:** Write a function that divides two integers and throws an exception if the divisor is zero. Handle the exception in the main function and print an appropriate message.
- **Error:** Division by zero.
- **Concept:** Basic exception handling using `throw` and `catch`.

For solutions [click here](/project10/solutions/p1.cpp).

## Problem 2: Invalid Array Index Access
- **Objective:** Create an array of fixed size. Write a function to access elements by index and throw an exception if the index is out of bounds.
- **Error:** Array index out of bounds.
- **Concept:** Throwing exceptions for invalid memory access.

For solutions [click here](/project10/solutions/p2.cpp).

## Problem 3: File Open Failure
- **Objective:** Write a program that tries to open a file with a user-specified name. Throw an exception if the file doesn’t exist or fails to open.
- **Error:** File not found or cannot be opened.
- **Concept:** Handling file I/O exceptions.

For solutions [click here](/project10/solutions/p3.cpp).

## Problem 4: Negative Value for Square Root
- **Objective:** Implement a function that calculates the square root of a number. If the input is negative, throw an exception and handle it in the main function.
- **Error:** Negative input for square root.
- **Concept:** Exception handling with mathematical operations.

For solutions [click here](/project10/solutions/p4.cpp).

## Problem 5: Custom Exception: Invalid Age
- **Objective:** Create a custom exception class `InvalidAgeException`. Write a program that takes age as input and throws this exception if the age is below 0 or above 150.
- **Error:** Invalid input for age.
- **Concept:** Creating and using custom exception classes.

For solutions [click here](/project10/solutions/p5.cpp).

## Problem 6: Multiple Exception Types
- **Objective:** Write a program that performs division and array access. If either the division is by zero or the array index is out of bounds, throw an exception. Catch and handle both exceptions.
- **Error:** Division by zero and array index out of bounds.
- **Concept:** Handling multiple types of exceptions in a single program.

For solutions [click here](/project10/solutions/p6.cpp).

## Problem 7: Bank Account Withdrawal
- **Objective:** Implement a `BankAccount` class that allows deposits and withdrawals. If the withdrawal amount is more than the current balance, throw a custom `OverdraftException`.
- **Error:** Withdrawal exceeds account balance.
- **Concept:** Using custom exceptions for class methods.

For solutions [click here](/project10/solutions/p7.cpp).

## Problem 8: String to Integer Conversion
- **Objective:** Write a function that converts a string to an integer. Throw an exception if the string contains non-numeric characters, and handle the exception with an appropriate message.
- **Error:** Invalid input for integer conversion.
- **Concept:** Exception handling with invalid input data.

For solutions [click here](/project10/solutions/p8.cpp).

## Problem 9: Memory Allocation Failure
- **Objective:** Write a program that attempts to allocate a large amount of memory dynamically using `new`. Handle `std::bad_alloc` if memory allocation fails.
- **Error:** Memory allocation failure.
- **Concept:** Handling exceptions related to dynamic memory management.

For solutions [click here](/project10/solutions/p9.cpp).

## Problem 10: Chained Exceptions
- **Objective:** Create two functions where one calls the other. The inner function throws an exception, which is caught by the outer function, where another exception is thrown and handled in `main()`.
- **Error:** Multiple exceptions being thrown and caught at different levels.
- **Concept:** Chaining exceptions and handling them in different functions.

For solutions [click here](/project10/solutions/p10.cpp).

---

These problems will help you gain a better understanding of how to use exceptions in C++, handle different types of errors, and create custom exceptions to manage specific situations.
