#include<iostream>
//symbolic constant >> macros don't occupy any place in memory
#define X 25
using namespace std;

int main(){
    const float PI = 3.14; // must be initialized
    cout<<X;
    cout<<PI;

    return 0;
}   