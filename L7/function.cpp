#include<iostream>
using namespace std;
// function declaration
void sayHello(){
    cout<<"Hello :) \n";  
}
void assistant(){
    sayHello();
    cout<<"Work done \n";
}
int main(){
    // sayHello(); // function call
    assistant();
    return 0;
}