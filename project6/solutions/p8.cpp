#include <iostream>
#include <string>
using namespace std;

// Define the Product structure
struct Product {
    int productId;
    string productName;
    float unitPrice;
    int quantity;
};

// Function to calculate total value of a product
float calculateTotalValue(Product prod) {
    return prod.unitPrice * prod.quantity;
}

int main() {
    Product prod;
    cout << "Enter product details:" << endl;
    cout << "Product ID: ";
    cin >> prod.productId;
    cout << "Product Name: ";
    cin.ignore(); // Ignore newline character from previous input
    getline(cin, prod.productName);
    cout << "Unit Price: ";
    cin >> prod.unitPrice;
    cout << "Quantity: ";
    cin >> prod.quantity;

    // Calculate and display total value
    float totalValue = calculateTotalValue(prod);
    cout << "Total Value: " << totalValue << endl;

    return 0;
}
