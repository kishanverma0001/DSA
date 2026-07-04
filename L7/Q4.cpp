// Question 4 : Write a function that prints the largest of 3 numbers.

#include<iostream>
using namespace std;

int largest(int a,int b,int c){
    if((a > b) && (a > c)){
        cout<<a<<" is largest."<<endl;
        return a;
    }else if(b > c){
         cout<<b<<" is largest."<<endl;
         return b;
    }else{
         cout<<c<<" is largest."<<endl;
         return c;
    }
}

int main(){
    largest(10,25,13);
    return 0;
}