#include<iostream>
using namespace std;
void changeA(int &b){
    b = 50;
    cout<<b<<endl;
}
int main(){
    int a = 25;
    changeA(a);
    cout<<"a = "<<a<<endl;
    return 0;
}