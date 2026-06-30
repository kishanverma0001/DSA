// print e largest of two numbers

#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter 1st number : "<<endl;
    cin>>a;
    cout<<"Enter 2nd number : "<<endl;
    cin>>b;
    
    if(a > b){
        cout<<a<<" a is largest."<<endl;
    }else{
        cout<<b<<" b is largest"<<endl;
    }
    return 0;
} 