#include <iostream>
using namespace std;

class Matrix 
{
public:
    int** create (int row, int col)
    {
        int** matrix = new int*[row];
        for (int i=0;i<row;i++)
        {
            matrix[i] = new int[col];
        }
        return matrix;
    }
    
    void insert (int row,int col,int** matrix)
    {
        for (int i=0;i<row;i++)
        {
            for (int j=0;j<col;j++)
            {
                cout << "[" << i << "][" << j <<"] :";
                cin >> matrix[i][j];
            }
        }
    }

    void printing (int row,int col,int** matrix)
    {
        for (int i=0;i<row;i++)
        {
            for (int j=0;j<col;j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
 
    
    void dealocating (int row,int col,int** matrix)
    {
        for (int i=0;i<row;i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    } 
};

class Opprations
{
public:
    int** addition (int row,int col,int** mat1,int** mat2)
    {
        int** result = new int*[row];
        for (int i=0;i<row;i++)
            result[i] = new int[col];
        
        for (int i=0;i<row;i++)
        {
            for (int j=0;j<col;j++)
            {
                result[i][j] = mat1[i][j]+mat2[i][j];
            }
        }

        return result;
    }
};

int main()
{
    int row = 2;
    int col = 2;
    // Matrix m1;
    // int** matrix = m1.create(row,col);
    // m1.insert(row,col,matrix);
    // m1.printing(row,col,matrix);
    // m1.dealocating(row,col,matrix);

    Matrix mat;
    int** mat1 = mat.create(row,col);
    int** mat2 = mat.create(row,col);

    mat.insert(row,col,mat1);
    mat.insert(row,col,mat2);


    Opprations op;
    int** res = op.addition(row,col,mat1,mat2);
    mat.printing(row,col,res);

    // Deallocating
    mat.dealocating(row,col,mat1);
    mat.dealocating(row,col,mat2);
    mat.dealocating(row,col,res);

    return 0;
}

