// inlcuding required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input rows, columns, elements of 2 matrix from the user
    int mat1Rows, mat1Cols, mat2Rows, mat2Cols;

    cout << "Enter the number of rows for the first matrix: ";
    cin >> mat1Rows;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> mat1Cols;

    cout << "Enter the number of rows for the second matrix: ";
    cin >> mat2Rows;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> mat2Cols;

    if (mat1Rows != mat2Rows || mat1Cols != mat2Cols) {
        cout << "Matrix addition is not possible. Dimensions are not compatible." <<  endl;
        return 0;
    }

    int matrix1[mat1Rows][mat1Cols];

    cout << "Enter the elements of the first matrix " <<  endl;
    for (int i = 0; i < mat1Rows; ++i) {
        for (int j = 0; j < mat1Cols; ++j) {
            cout << "Enter " << i+1 << "th row & " << j+1 << "th column element of the first matrix: ";
            cin >> matrix1[i][j];
        }
    }

    int matrix2[mat2Rows][mat2Cols];
    cout << endl << "Enter the elements of the second matrix:" <<  endl;
    for (int i = 0; i < mat2Rows; ++i) {
        for (int j = 0; j < mat2Cols; ++j) {
            cout << "Enter " << i+1 << "th row & " << j+1 << "th column element of the second matrix: ";
            cin >> matrix2[i][j];
        }
    }

    // calculating and displaying the addition of 2 matrices
    int result[mat1Rows][mat1Cols];

    for (int i = 0; i < mat1Rows; ++i) {
        for (int j = 0; j < mat1Cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << endl << "Result of matrix addition:" <<  endl;
    for (int i = 0; i < mat1Rows; ++i) {
        cout << "| ";
        for (int j = 0; j < mat1Cols; ++j) {
            if (j < mat1Cols - 1) {
                cout << result[i][j] << ", " ;
            } else {
                cout << result[i][j] << " |" ;
            }
        }
        cout <<  endl;
    }

    return 0;
}
