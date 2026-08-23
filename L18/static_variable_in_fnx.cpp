#include<iostream>
using namespace std;

void counter(){
    // int count = 0; without static
    static int count = 0; // static variable
    count++;
    cout<<"count : "<<count<<endl;
}
int main(){
    counter();
    counter();
    counter();
    return 0;
}