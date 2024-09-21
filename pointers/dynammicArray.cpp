#include <iostream>
#include <string>
using namespace std;


class Set {


    int size = 3;
    int* array = new int[size];
    int index = 0;
public:    
    void append (int item){
        
            cout << "size idx:" << this->index << endl;
        if (this->index >= (this->size)){
            cout << "size:" << this->size << endl;
            this->size *= 2;
            int* new_array = new int[this->size];
            
            for (int i=0;i<this->index;i++){
                new_array[i] = this->array[i];
            }
            dealocate();
            this->array = new_array;
            delete[] new_array;
        }


        this->array[this->index] = item;
        index += 1;
        // }


    }

    void print_set (){
        cout<<endl;
        cout<< (this->size) << endl;
        for (int i=0;i<this->index;i++){
            cout << this->array[i] << " ";
        }
        cout<<endl;
    }

    void dealocate (){
        delete[] this->array;
    }
};


int main() {
    Set arr;

    arr.append(10);
    arr.append(20);
    arr.append(30);
    arr.append(40);

    arr.append(10);
    arr.append(20);
    arr.append(30);
    arr.append(40);

    // int fuck[3];
    // cout << sizeof(fuck) << endl;

    // int* array = new int[3];
    // array[0] = 1;
    // array[1] = 2;
    // array[2] = 3;
    // array[3] = 4;
    // array[4] = 5;

    // delete[] array;

    arr.print_set();

    arr.dealocate();
    return 0;
}
