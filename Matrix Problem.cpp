/******************************************************************************

Create a class called 'Matrix' containing constructor that initializes the number of rows and number of columns of a new Matrix object.
The Matrix class has the following information:

1.number of rows of matrix
2 number of columns of matrix
3 - elements of matrix in the form of 2D array

The Matrix class has methods for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at given position (i,j)
4 - adding two matrices. If the matrices are not addable, "Matrices cannot be added" will be displayed.
5 - multiplying the two matrices


*******************************************************************************/

#include <iostream>

using namespace std;

class Matrix {
  private:
    int no_of_rows;
    int no_of_cols;
    int **matrixArr;
    public:
    Matrix(int rows, int cols){
        no_of_rows = rows;
        no_of_cols = cols;
        matrixArr = new int *[no_of_rows];
        for(int i = 0; i< no_of_rows; i++){
            matrixArr[i] = new int[no_of_cols];
        }
        
        for(int i = 0; i< no_of_rows; i++){
            for(int j = 0; j < no_of_cols; j++){
                matrixArr[i][j] = 1;
            }
        }
    }
    
    int getRows() { return this->no_of_rows; }
    int getCols() { return this->no_of_cols; }
    
    void printMatrix() {
        for(int i = 0; i < no_of_rows; i++){
            for(int j = 0; j < no_of_cols; j++){
                cout<<matrixArr[i][j]<<" "; 
            }
            cout<<endl;
        }
    }
    
    void setElement(int row, int col, int value){
        matrixArr[row-1][col-1] = value;
    }
    
    int ** getMatrix(){
        return matrixArr;
    }
    
    
    void addTwoMatrices(Matrix m2){
        int ** temp = m2.getMatrix();
        if(m2.getRows() == getRows() && m2.getCols() == getCols()){
            for(int i = 0; i < no_of_rows; i++){
                for(int j = 0; j < no_of_cols; j++){
                    matrixArr[i][j] += temp[i][j];
                }
            }
        }
    }
    
    void multiplyTwoMatrices(Matrix m2){
        int ** temp = m2.getMatrix();
        if(m2.getRows() == getRows() && m2.getCols() == getCols()){
            for(int i = 0; i < no_of_rows; i++){
                for(int j = 0; j < no_of_cols; j++){
                    matrixArr[i][j] *= temp[i][j]; 
                }
            }
        }
    }
};


int main()
{
    Matrix m1(3,3);
    cout<<endl;
    m1.setElement(2,2, 5);
    m1.printMatrix();
    
    Matrix m2(3,3);
    m2.setElement(2,2,5);
    
    m1.multiplyTwoMatrices(m2);
    
    cout<<endl;
    
    m1.printMatrix();

    return 0;
}
