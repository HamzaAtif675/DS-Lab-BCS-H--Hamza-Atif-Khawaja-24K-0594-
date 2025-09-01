#include <iostream>
using namespace std;

int main(){


    int days;
    int times;

    cout << "Enter days: ";
    cin >> days;
    cout << endl;
    cout << "Enter number of readings per day: ";
    cin >> times;
    cout << endl;
    
    double** temps = new double*[days];

    for(int i = 0; i < days; i++){

        temps[i] = new double[times];

        for(int j = 0; j < times; j++){

            cout << "Enter temperature of the day " <<i+1 << ",reading " << j+1 << ":"<< endl;
            cin >> temps[i][j];

        }
    }


    double coldest = 9999;
    double hottest = -9999, 
   
    int hotDay = 0; 
    int coldDay = 0;
    cout << endl;
    cout << "Daily average temperatures:" << endl;;
    for(int i = 0; i < days; i++){

        double sum = 0;

        for(int j = 0; j < times; j++){

            sum += temps[i][j];

        }
        double avg = sum/times;
        cout << "Day" << i+1 << ": " << avg << endl;

        if(avg > hottest){

            hottest = avg;
            hotDay = i;

        }
        else if(avg < coldest){

            coldest = avg;
            coldDay = i;

        }
    }
    cout << endl;
    cout << "Hottest day Day " << hotDay+1 << " with avg " << hottest << endl;

    cout << endl;

    cout << "Cldest day: Day " << coldDay+1 << " with avg " << coldest;

    for (int i = 0; i < days; i++) {
        delete[] temps[i];
    }
    delete[] temps;












    return 0;
}
