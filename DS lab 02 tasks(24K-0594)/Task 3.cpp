#include <iostream>
using namespace std;

int main(){
    int n;  
    cout << "Enter the number of students: ";
    cin >> n;

   
    int* courses = new int[n];
    int** marks = new int*[n];

    
    for (int i = 0; i < n; i++){
        cout <<"Enter number of courses for student "<< i + 1 << ": ";

        cin >> courses[i];
        marks[i] = new int[courses[i]];

    }

   
    for(int i = 0; i < n; i++){

        cout << "Enter marks for student " << i + 1 << ":\n";

        for(int j = 0; j < courses[i]; j++){
            cout << "  Course " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < courses[i]; j++){

            sum += marks[i][j];
        }
        double average = (double)sum / courses[i];
        cout << "Average " << i + 1 << ": " << average << endl;
    }

    
    for (int i = 0; i < n; i++) {
        delete[] marks[i];
    }

    delete[] marks;

    delete[] courses;

    return 0;
}
