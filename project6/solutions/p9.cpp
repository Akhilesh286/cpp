#include <iostream>
using namespace std;

// Define the Complex structure
struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    return sum;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2) {
    Complex diff;
    diff.real = c1.real - c2.real;
    diff.imaginary = c1.imaginary - c2.imaginary;
    return diff;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex c1, Complex c2) {
    Complex product;
    product.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    product.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return product;
}

int main() {
    Complex num1, num2;
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> num1.real >> num1.imaginary;
    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> num2.real >> num2.imaginary;

    // Perform operations
    Complex sum = addComplex(num1, num2);
    Complex diff = subtractComplex(num1, num2);
    Complex product = multiplyComplex(num1, num2);

    // Display results
    cout << "Sum: " << sum.real << " + " << sum.imaginary << "i" << endl;
    cout << "Difference: " << diff.real << " + " << diff.imaginary << "i" << endl;
    cout << "Product: " << product.real << " + " << product.imaginary << "i" << endl;

    return 0;
}
