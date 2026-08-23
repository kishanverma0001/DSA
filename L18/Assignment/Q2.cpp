#include<iostream>
using namespace std;

class BankAccount{
    long long accountNumber;
    float balance;

    public:
    BankAccount(long long accountNumber,float balance){
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
        void deposit(float amount){
            balance += amount;
            cout<<"You deposited : "<< amount<<"₹"<<endl;
        }

        void withdraw(float amount){
            if(amount<= balance){
            balance -= amount;
            cout<<"You withdrawn: "<< amount<<"₹"<<endl;
            }else{
                cout<<"Insufficient balance"<<endl;
            }
        }

       float getBalance(){
            cout<<"Your current balance is : "<<balance<<endl;
            return balance;
        }
};

int main(){
    BankAccount b1(14350100016749,5000);
    b1.deposit(500);
    b1.withdraw(100);
    b1.getBalance();
    return 0;
}