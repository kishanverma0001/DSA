// using two inner loops
/*
   *
  **
 ***
**** 
*/
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i = 1; i <= n;i++){
        // for spaces
        for(int j = n;j >i;j--){
            cout<<" ";
        }// for stars
        for(int k = 1;k <= i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0; 
}