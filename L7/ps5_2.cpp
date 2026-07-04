// WAF to find binomial cofficient for given n & r.

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1;i <= n;i++){
        fact = fact * i;
    }
    return fact;
}

int binomial_coff(int n,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);

    int binomial_coff = fact_n / (fact_r * fact_n_r);

    return binomial_coff;

}

int main(){
    int b_f = binomial_coff(5,1);
    cout<<b_f<<endl; 
    return 0;
}