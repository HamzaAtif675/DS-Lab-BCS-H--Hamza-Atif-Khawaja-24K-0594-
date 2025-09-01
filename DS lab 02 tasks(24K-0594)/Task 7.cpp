#include <iostream>
using namespace std;

int main(){

    int dep;


    cout << "Enter number of departments: ";
    cin >> dep;

    int** salaries = new int*[dep];
    int* empCount = new int[dep];

    for (int i = 0; i < dep; i++) {
        cout << "Enter number of employees in department " << i + 1 << ": ";
        cin >> empCount[i];
        salaries[i] = new int[empCount[i]];
        for (int j = 0; j < empCount[i]; j++){
            cout << "Enter salary employee "<< j+1 << ": " << endl;
            cin >> salaries[i][j];
        }
    }
    cout << endl;
    cout << "Highest salary each department: " << endl;
    for(int i = 0; i < dep; i++){

        int maxSalary = salaries[i][0], 
        int sum = 0;

        for(int j = 0; j < empCount[i]; j++){

            if(salaries[i][j] > maxSalary)
                maxSalary = salaries[i][j];
            sum += salaries[i][j];

        }

        cout << "Department " << i + 1 << ": " << maxSalary << endl;
    }

    int maxDept = 0;



    double maxAvg = 0;

    for(int i = 0; i < dep; i++){
        int sum = 0;
        for (int j = 0; j < empCount[i]; j++){
            sum += salaries[i][j];
        }
        double avg = (double)sum / empCount[i];
        if(avg > maxAvg){

            maxAvg = avg;
            maxDept = i;
        }
    }

    cout << "\nDepartment with highest average salary is the Department " << maxDept + 1 << endl;

    for(int i = 0; i < dep; i++){
        delete[] salaries[i];
    }
    delete[] salaries;

    delete[] empCount;







    return 0;
}
