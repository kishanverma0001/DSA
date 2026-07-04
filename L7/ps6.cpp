// print all primes in a range of 2 to n

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int j = 2;j<=sqrt(n);j++){
        if(n % j == 0){
          return false;
    
        }
    }
    return true;
}

void allPrime(int num){
    for(int i = 2;i<=num;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        } 
    }
    cout<<endl;
}

int main(){
    allPrime(50);
    return 0;
}