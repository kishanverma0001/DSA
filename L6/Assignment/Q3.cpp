#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i <= n;i++){
        for(int j = (n - i);j >= 1;j--){
            cout<<" ";
        }for(int k = 1;k <= i;k++){
            cout<<(i-k + 1);
        }for(int l = 2;l <= i;l++){
            cout<<(l);
        }
        cout<<endl;
    }
    return 0;
}