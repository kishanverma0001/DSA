#include<iostream>
using namespace std;
int main(){
    
    int a = 5;
    int b = 2;

    // binary operators
    cout<<"a + b = "<< a + b<<endl;
    cout<<"a - b = "<< a - b<<endl;
    cout<<"a * b = "<< a * b<<endl;
    cout<<"a / b = "<< a / b<<endl;
    cout<<"a % b = "<< a % b<<endl;

    // unary operators
    a++;    // a++ >> a = a + 1 increment post
    cout<<"a = "<<a<<endl;

    b--;    // b-- >> b = b - 1 decrement post
    cout<<"b = "<<b<<endl;

    int c = 10;
    int d = ++c; // pre increment increase then print
    
    cout<<"c = "<<c<<endl; 
    cout<<"d = "<<d<<endl;

    int e = 15;
    int f = e++; // print then increase
    cout<<"e = "<<e<<endl; 
    cout<<"f = "<<f<<endl; 
    return 0;
}  