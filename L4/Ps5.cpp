// build a calculator using switch for the 4 basic arithmetic operations (+,-,*,/)

#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter value of a : ";
    cin>>a;

    cout<<"Enter value of b : ";
    cin>>b;

    char oper;
    cout<<"Enter an operator : ";
    cin>>oper;
    switch(oper){
        case '+': cout<<"a + b = "<< a + b<<endl;
        break;
        case '-': cout<<"a - b = "<< a - b<<endl;
        break;
        case '*': cout<<"a * b = "<< a * b<<endl;
        break;
        case '/': cout<<"a / b = "<< a / b<<endl;
        break;
        default : cout<<"Invalid operator."<<endl;
    }
    return 0;
}