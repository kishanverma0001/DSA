/* Question 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
*/
#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter a number : ";
    cin>>num;
    
    if(num > 0){
        cout<<"Number is positive : "<<num<<endl;
    }else if(num == 0){
        cout<<"Number is zero : "<<num<<endl;
    }else{
        cout<<"Number is negative : "<<num<<endl;
    }
    return 0;
}