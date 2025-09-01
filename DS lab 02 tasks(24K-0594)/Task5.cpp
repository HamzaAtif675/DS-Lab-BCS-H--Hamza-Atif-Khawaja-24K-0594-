#include<iostream>
#include<string>

using namespace std;

int **creatMatrix(int rows,int cols){
    int** matrix = new int*[rows];
    for(int i = 0 ; i < rows ; i++){
        matrix[i] = new int[cols];
    }
    return matrix;
}

void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main(){
    int rows;
    int cols;

    cout << "Enter the number of rows: " << endl;
    cin >> rows;
    cout << "enter the number of columns: " << endl;
    cin >> cols;

    int **matrix01 = creatMatrix(rows , cols);

    int **matrix02 = creatMatrix(rows , cols);

    int **result = creatMatrix(rows , cols);

    int **result1 = creatMatrix(rows ,  cols);

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cout << "Enter the value for row " << rows << " and column " << cols << " for matrix 1: " << endl;
            cin >> matrix01[i][j];
            cout << endl;
            cout << "Enter the value for row " << rows << " and column " << cols << " for matrix 2: " << endl;
            cin >> matrix02[i][j];

        }
    }

    cout << "ADDING THE TWO MATRIX! " << endl;

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            result[i][j] = matrix01[i][j] + matrix02[i][j]; 
        }
    }

    cout << endl;

    cout << "subtracting THE TWO MATRIX! " << endl;

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            result1[i][j] = matrix01[i][j] - matrix02[i][j]; 
        }
    }

    cout << endl;
    cout << "ADDITION result: " << endl;
     for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cout << result[i][j] << " ,";
        }
        cout << endl;
    }
    cout << endl;
    cout << "SUBTRACTION result: " << endl;
     for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cout << result[i][j] << " ,";
        }
        cout << endl;
    }

    deleteMatrix(matrix01 , rows);
    deleteMatrix(matrix02 , rows);
    deleteMatrix(result , rows);
    deleteMatrix(result1 , rows);

    return 0;



}