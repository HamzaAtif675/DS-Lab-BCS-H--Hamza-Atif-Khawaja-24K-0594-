
#include <iostream>

using namespace std;

void printNumbers(int n){
    if (n == 0) return;

    cout << n << " ";
    printNumbers(n - 1);
}

int main(){
    int n = 5;


    printNumbers(n);
    return 0;
}

// Part 2 of task 02





void functionB(int n);

void functionA(int n){
    if (n <= 0) return;
    cout << "A: " << n << " ";
    functionB(n - 1);
}



void functionB(int n){


    if (n <= 0) return;
    cout << "B: " << n << " ";
    functionA(n - 1);
}

int main(){

    int n = 5;

    functionA(n);
    return 0;
}

