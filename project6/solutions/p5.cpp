#include <iostream>
#include <string>
using namespace std;

// Define the Book structure
struct Book {
    string title;
    string author;
    float price;
};

int main() {
    // Create an array of 3 Book structures
    Book books[3];

    // Input details for each book
    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        cout << "Title: ";
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Price: ";
        cin >> books[i].price;
    }

    // Find book with highest price
    int maxIndex = 0;
    for (int i = 1; i < 3; ++i) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    // Display details of the book with highest price
    cout << "\nDetails of the book with highest price:" << endl;
    cout << "Title: " << books[maxIndex].title << endl;
    cout << "Author: " << books[maxIndex].author << endl;
    cout << "Price: " << books[maxIndex].price << endl;

    return 0;
}
