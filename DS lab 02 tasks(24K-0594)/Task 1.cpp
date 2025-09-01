#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    int n;
    int index;
    int flag = 0;
    

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int* arr = new int[n];

    for(int i = 0 ; i < n ; i++){
        arr[i] = 0;
    }

    while(flag == 0){
        cout << "Enter the index that you want to change or enter -1 to exit: " << endl;
        cin >> index;
        if(index == -1){
            flag = 1;
        }
        else if(index < n && index > 0){
            cout << "Enter the value for the index: " << endl;
            cin >> arr[index];
        }
    }
    cout << endl;
    cout << "The values in the array are: " << endl;
    for(int i = 0 ; i < n ; i++){
        
        cout << arr[i] << ", ";
    }

    delete[] arr;

    return 0;


}