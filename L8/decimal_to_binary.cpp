#include<iostream>
using namespace std;

void decTobin(int decNum){
    int n = decNum;
    int binNum = 0;
    int pow = 1;
    while(n>0){
        int digit = n % 2;
        binNum += digit * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout<<binNum<<endl;
}
int main(){
    decTobin(50);
    return 0;
}