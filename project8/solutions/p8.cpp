#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    void setTitle(string t) {
        title = t;
    }

    void setAuthor(string a) {
        author = a;
    }

    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }
};

int main() {
    Book book;
    book.setTitle("The Great Gatsby");
    book.setAuthor("F. Scott Fitzgerald");
    
    cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << endl;
    return 0;
}
