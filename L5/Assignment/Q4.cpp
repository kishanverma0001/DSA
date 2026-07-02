// Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.(Assume N >= 2)

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    bool isPrime = true;

    int i = 2;
    while(i < num){
        if(num % i == 0){
            isPrime = false;
        }
        i++;
    }
    if(isPrime){
        cout<<"Number is a prime number."<<endl;
    }else{
        cout<<"Number is not a prime number."<<endl;
    }
    return 0;
}