#include<iostream>
#include<string>

using namespace std;

class BankAccount{
    private:
    double balance;

    public:

    BankAccount(){
        balance = 0;
    }

    BankAccount(double initial) : balance(initial) {};
    
    BankAccount(const BankAccount &other){
        balance = other.balance;
    }

    void withdrawMoney(double amount){
        if(amount > balance){
            cout << "Insufficent balance! " << endl;
        }
        else{
            balance = balance - amount;
        }
        
    }

    void getBalance(){
        cout << "Balance: " << balance << endl;
    }
};

int main(){
    BankAccount account1;
    account1.getBalance();
    cout << endl;
    BankAccount account2(1000.0);
    account2.getBalance();
    cout << endl;
    BankAccount account3(account2);
    account3.getBalance();
    account3.withdrawMoney(200);
    account3.getBalance();
}