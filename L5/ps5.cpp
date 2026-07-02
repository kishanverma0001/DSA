//print the digits of a given no. in reverse order n = 10829

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int digit;
    while(num > 0){
        digit = num % 10;
        num = num / 10;
        cout<<digit<<endl;
    }
 return 0;
}