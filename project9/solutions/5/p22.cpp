#include <iostream>
using namespace std;

class Collection {
protected:
    int* arr;
    int size;

public:
    Collection(int size) : size(size) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1; // Initializing with some values
        }
    }

    virtual ~Collection() {
        delete[] arr;
    }

    int& operator[](int index) {
        return arr[index];
    }
};

class AdvancedCollection : public Collection {
public:
    AdvancedCollection(int size) : Collection(size) {}

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    AdvancedCollection ac(5);
    ac.display();

    ac[2] = 10; // Modify the third element
    ac.display(); // Output: 1 2 10 4 5

    return 0;
}
