#include <iostream>
using namespace std;

int** create(int row, int col) 
{
    int** matrix = new int*[row];

    for ( int i=0; i<row; i++ )
    {
        matrix[i] = new int[col];
    }
    return matrix;
}

void insert (int row, int col, int** matrix)
{
    for ( int i=0; i<row; i++ )
    {
        for ( int j=0; j<col; j++ )
        {
            cout << "["<<i<<"]["<<j<<"] :";
            cin >> *(*(matrix + i) + j);
        }
    }
}

void dealocation(int row, int col, int** matrix)
{
    for ( int i=0; i<row; i++ )
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int sum(int row, int col, int** matrix)
{
    int sum;
    for ( int i=0; i<row; i++ )
    {
        for ( int j=0; j<col; j++ )
        {
            sum += *(*(matrix + i) + j);
        }
    }
    return sum;
}

int main()
{
    int row = 2;
    int col = 2;
    int** matrix = create(row,col);
    insert(row,col,matrix);
    cout << sum(row,col,matrix) << endl;
    dealocation(row,col,matrix);

    return 0;
}

