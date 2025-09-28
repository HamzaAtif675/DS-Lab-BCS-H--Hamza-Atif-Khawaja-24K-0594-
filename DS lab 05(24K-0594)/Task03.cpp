#include <iostream>

using namespace std;


int sumTail(int n, int total = 0){
    if (n == 0) return total;  
    return sumTail(n - 1, total + n); 
}


int sumNonTail(int n){

    if (n == 0) return 0;  
    return n + sumNonTail(n - 1); 
}

int main(){

    int n = 5;
    
    cout << "Tail Recursive Sum: " << sumTail(n) << endl;
    cout << "Non-Tail Recursive Sum: " << sumNonTail(n) << endl;
    return 0;
}
