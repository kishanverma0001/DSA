// Question 2 : WAP to print the multiplication table of a number, entered by the user.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Multiplication table of "<<num<<" : "<<endl;
    for(int i = 1;i<=10;i++){
        cout<<num << " X "<< i <<" = "<<num * i<<endl;
    }

    // cout<<"value of "<<num<<"! is : "<<fact<<endl;;
    return 0;
}