// income tax calculator
#include<iostream>
using namespace std;

int main(){
    float income;
    cout<<"Enter your income : ";
    cin>>income;
    
    if(income < 500000){
        cout<<"Income tax = "<<((income * 0) / 100)<<endl;
    }else if(income >= 500000 && income <= 1000000){
        cout<<"Income tax = "<<((income * 20) / 100)<<endl;
    }else{
        cout<<"Income tax = "<<((income * 30) / 100)<<endl;
    }
    return 0;
}