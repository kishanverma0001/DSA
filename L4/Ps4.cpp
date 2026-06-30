// print larget of 3 numbers
#include<iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter 1st number : "<<endl;
    cin>>a;
    cout<<"Enter 2nd number : "<<endl;
    cin>>b;
    cout<<"Enter 3rd number : "<<endl;
    cin>>c;

    if(a > b && a > c){
        cout<<a<<" is larget."<<endl;
    }else if(b>c){
        cout<<b<<" is larget."<<endl;
    }else{
        cout<<c<<" is larget."<<endl;
    }

    return 0;
}
