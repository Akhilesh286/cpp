#include <iostream>
#include <string>
using namespace std;

int** declare_metrix (int row, int column){
    int** metrix = new int*[row];
    for (int i=0; i<row ; i++){
        metrix[i] = new int[column];
    }

    return metrix;
}


void initialize_matrix (int** metrix,int row, int column){
    // int value = 10;
    for (int i=0;i<row;i++){
        cout << "ender [" << i << "]:" << endl;
        for (int j=0;j<column;j++){
            int value;
            cout << "[" << j << "]:";
            cin >> value;
            metrix[i][j] = value;
        }
    }

}

void initialize_matrix1 (int** metrix,int row, int column){
    int value = 9;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            metrix[i][j] = value;
            value--;
        }
    }

}

void initialize_matrix2 (int** metrix,int row, int column){
    int value = 0;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            metrix[i][j] = value;
            value++;
        }
    }

}
void print_metrix (int** metrix,int row, int column){
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout << metrix[i][j] << " ";
        }
        cout << endl;
    }
}

int** add_metrix (int** metrix1,int** metrix2,int row,int column){
    int** result = new int*[row];
    for (int i=0;i<row;i++){
        result[i] = new int[column];
        for (int j=0;j<column;j++){
            result[i][j] = metrix1[i][j] + metrix2[i][j];
        }
    }

    return result;
}

int** transpose_metrix (int** metrix,int row,int column){
    int** result = new int*[row];
    for (int i=0;i<row;i++){
        result[i] = new int[column];
        for (int j=0;j<column;j++){
            result[i][j] = metrix[j][i];
        }
    }

    return result;
}

void deallocate_metrix(int** metrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] metrix[i];
    }
    delete[] metrix;
}
int main() {

    int row = 3;
    int column = 3;


    int** arr = declare_metrix(3,3);
    initialize_matrix(arr,row,column);
    print_metrix(arr,row,column);

    cout<<endl;

    int** arr2 = declare_metrix(3,3);
    initialize_matrix2(arr2,row,column);
    print_metrix(arr2,row,column);

    cout<<endl;

    int** result = add_metrix(arr,arr2,row,column);
    print_metrix(result,row,column);

    cout<<endl;

    int** transpose = transpose_metrix(result,row,column);
    print_metrix(transpose,row,column);

    deallocate_metrix(arr,row);
    deallocate_metrix(arr2,row);
    deallocate_metrix(result,row);
    deallocate_metrix(transpose,column);


    return 0;
}
