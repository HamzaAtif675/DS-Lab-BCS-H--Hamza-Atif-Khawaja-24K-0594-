#include <iostream>
using namespace std;

int main(){
    int rows; 
    int cols;

    cout << "Enter rows: " << endl;
    cin >> rows;
    cout << endl;
    cout << "ENter columns: " << endl;
    cin >> cols;
    cout << endl;

    int** matrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Enter the elements in the matrix: "<< endl;

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){

            cin >> matrix[i][j];

        }
    }
    cout << endl;
    cout << "Matrix in normal form:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){

            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }

    cout << "Sparse Matrix (row, col, value): " << endl;
    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){

            if(matrix[i][j] != 0){

                cout << i << " " << j << " " << matrix[i][j] << endl;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;













    

    return 0;
}
