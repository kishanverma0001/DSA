// Question 2 : Write a function to calculate the sum of digits of a number.

#include<iostream>
using namespace std;

int sum_of_digit(int n){
    int sum = 0;
    while(n>0){
    int digit = n % 10;
    n = n / 10;
    sum = sum + digit;
    }
    cout<<"sum of digit : "<<sum<<endl;
    return sum;
}

int main(){
    sum_of_digit(10521);
    return 0;
}