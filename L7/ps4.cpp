// WAF to print if  number is prime or not.

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    if(num == 1){
        return false;
    }
        for(int i = 2;i < num;i++){
            if(num % i == 0){
             return false;
            }    
    }
    return true;
}

bool isPrime2(int num){
    if(num == 1){
        return false;
    }
        for(int i = 2;i <= sqrt(num);i++){
            if(num % i == 0){
             return false;
            }    
    }
    return true;
}

int main(){
   
   cout<<isPrime(13)<<endl;
   cout<<isPrime(1)<<endl;
   cout<<isPrime2(22)<<endl;
return 0;
}