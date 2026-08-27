#include<iostream>
using namespace std;

int power(int x,int n){
    if(n == 0){
        return 1;
    }
    return x * power(x,n-1); // O(n)
}

int pow(int x, int n){ // O(logn)
    if(n == 0){
        return 1;
    }
    int halfPow = pow(x, n / 2);
    int halfPowSquare = halfPow * halfPow;

    if(n % 2 != 0){
        // odd
        return x * halfPowSquare;
    }
    return halfPowSquare;
}

int main(){
    // cout<<power(8,3);
    cout<<pow(2, 10)<<endl;
    return 0;
}
