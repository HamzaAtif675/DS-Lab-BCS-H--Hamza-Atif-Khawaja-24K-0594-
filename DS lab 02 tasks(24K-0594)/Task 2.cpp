#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    int rows;
    int cols;

    cout << "Enter the number of benches: " << endl;
    cin >> rows;
    cout << "Enter the number of seats: " << endl;
    cin >> cols;

    int** arr = new int*[rows];

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            arr[i] = new int[cols];
        }
    }

    for(int k = 0 ; k < rows ; k++){
        for(int l = 0 ; l < cols ; l++){
            arr[k][l] = 0;
        }
    }

    cout << "In order to reserve a seat type 1 and if not type 0: " << endl;

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cout << "DO you want to reserve seat " << j << " on bench " << i << endl;
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
           cout << arr[i][j] << ",";
        }
        cout << endl;
    }

    for(int i = 0 ; i < rows ; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}