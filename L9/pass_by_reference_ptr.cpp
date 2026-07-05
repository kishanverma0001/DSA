#include<iostream>
using namespace std;
void changeA(int *ptr){
    *ptr = 20; 
    cout<<*ptr<<endl; // dereferencing
}

int main(){
    int a = 10;
    changeA(&a);
    cout<<"a = "<<a<<endl;
    return 0;
}