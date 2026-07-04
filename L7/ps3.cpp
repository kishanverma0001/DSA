// WAF to print the factorial of a number n

#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i = 1;i<=num;i++){
        fact = fact * i;
    }
    cout<<"Factorial of a "<<num<<" is = "<<fact<<endl;
    return fact;
}

int main(){
    fact(10);
    return 0;
}