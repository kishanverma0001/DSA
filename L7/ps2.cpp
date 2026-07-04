// WAF to print if a number is even or odd
#include<iostream>
using namespace std;
void even_odd(int num){
    if(num % 2 == 0){
        cout<<num<<" is a even number."<<endl;
    }else{
        cout<<num<<" is a odd number."<<endl;
    }
}

int main(){
    even_odd(10);
    return 0;
}