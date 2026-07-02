//print the sum of odd digits of a number using while loop
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int digit;
    int sum = 0;
    while(num > 0){
        digit = num % 10;
        if(digit % 2 != 0){
            sum = sum + digit;
        }
        num = num / 10;
    }
    cout<<"Sum of odd digits = "<<sum<<endl;   
 return 0;
}