// WAF to find binomial cofficient for given n & r.

#include<iostream>
using namespace std;

int binomial_coff(int n, int r){
    int fact_n = 1;
    for(int i = 1;i <= n;i++){
        fact_n = fact_n * i;
    }
    int fact_r = 1;
    for(int j = 1;j <= r;j++){
        fact_r = fact_r * j;
    }
    int fact_n_r = 1;
    int n_r = (n - r);
    for(int k = 1;k <= n_r;k++){
        fact_n_r = fact_n_r * k;
    }

    int binomial_coffe = (fact_n) / (fact_r * fact_n_r);
    // int binomial_coffe = fact_n_r;

    return binomial_coffe;

return 0;
}

int main(){
    int b_c = binomial_coff(10,2);
    cout<<b_c<<endl;
    return 0;
}