// reverse a given number & print the result

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int result = 0;

    int digit;
    while(num > 0){
        digit = num % 10;
        result = result * 10 + digit;
        num = num / 10;
    }
    cout<<result<<endl;
 return 0;
}