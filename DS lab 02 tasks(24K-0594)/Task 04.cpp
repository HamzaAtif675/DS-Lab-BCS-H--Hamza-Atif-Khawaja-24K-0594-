#include<iostream>
#include<string>

using namespace std;



int* resizeArray(int* oldArr, int oldSize, int newSize) {
    if (newSize == oldSize) {
        return oldArr;
    }

    int* newArr = new int[newSize];

    int limit = (oldSize < newSize) ? oldSize : newSize;
    
    for (int i = 0; i < limit; i++) {
        newArr[i] = oldArr[i];
    }

    delete[] oldArr;

    return newArr;
}


int main(){
    int n;
    int choice;
    cout << "Enter the number of months: " << endl;
    cin >> n;

    int *arr = new int[n];

    for(int i = 0 ; i < n ; i++){
        cout << "Enter the expenses for the month " << i+1 << ":" << endl;
        cin >> arr[i];
    }
    cout << "COntents of the array before resizing: " << endl;
    
    for(int j = 0 ; j < n ; j++){
        cout << arr[j] << endl;
    }
    cout << endl;

    cout << "Do you want to add more months?, if yes press 1 otherwise press 0 " << endl;
    cin >> choice;
    cout << endl;

    if(choice == 1){
        int newSize;
        cout << "Enter the new size of the array: " <<endl;
        cin >> newSize;

        arr = resizeArray(arr , n , newSize);
        cout<< endl;

        if(newSize > n){
            cout << "Enter the expenses for the new months: " << endl;
            for(int i = n ; i < newSize ; i++){
                cin >> arr[i];
            }

            cout << endl;
            cout << "Displaying the contents of the array after resizing," << endl;

            for(int j = 0 ; j < newSize ; j++){
                cout << arr[j] << endl;
            }

            n = newSize;
            
        }
        else if(newSize < n){
            cout << n-newSize << "months have been removed from the array." << endl;
        }

    }
    else if(choice == 0){
        cout << "program ended!" << endl;
        return 0;
    }

    delete[] arr;

    return 0;

    
    
}