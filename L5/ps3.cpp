// sum of digit n = 10829
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
        sum = sum + digit;
        num = num / 10;
    }
    cout<<"Sum of digits = "<<sum<<endl;   
 return 0;
}