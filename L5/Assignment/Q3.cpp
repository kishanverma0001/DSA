/*Question 3 : WAP to input a number and check whether the number is an Armstrong number or not.
An Armstrong number is a number that is equal to the sum of cubes of its digits.*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int num = number;
    int sum = 0;

    int digit;
    while(num > 0){
        digit = num % 10;
        sum = sum + pow(digit,3);
        num = num / 10;
    }
    if(sum == number){
            cout<< number << " is a armstrong number."<<endl;
        }else{
            cout<< number <<" is not a armstrong number."<<endl;
        }  
 return 0;
}