#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

    Book(string t, string a) : title(t), author(a) {}

    Book(const Book &b) {
        title = b.title;
        author = b.author;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book book1("1984", "George Orwell");
    Book book2 = book1;
    book2.display();
    return 0;
}
