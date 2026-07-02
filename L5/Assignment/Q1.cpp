//Question 1 : WAP to find the Factorial of a number entered by the user.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int fact = 1;

    for(int i = 0;i<num;i++){
        fact = fact * (num - i);
    }
    cout<<"value of "<<num<<"! is : "<<fact<<endl;;
    return 0;
}