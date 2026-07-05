#include<iostream>
using namespace std;

void binTodec(int binNum){
    int n = binNum;
    int pow = 1;
    int decNum = 0;
    while(n > 0){
        int digit = n % 10;
        decNum += digit * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout<<decNum<<endl;
}

int main(){
    binTodec(1011);

    return 0;
}