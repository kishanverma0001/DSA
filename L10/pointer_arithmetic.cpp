#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;

    cout<<aptr<<endl;
    // increment
    aptr++;
    cout<<aptr<<endl;

    // decrement
    aptr--; // pre 
    cout<<aptr<<endl;;

    // Addition
    cout<<aptr+3<<endl;

    //Subtraction
    cout<<aptr-3<<endl;

    int b = 25;
    int *ptr1 = &b;
    int *ptr2 = ptr1 + 3;
    cout<<ptr2 - ptr1<<endl;
    return 0;
} 