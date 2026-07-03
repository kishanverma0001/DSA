/*Question 1 : Print the 0-1 Triangle Pattern.
For n = 5
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i = 1;i <= n;i++){
        for(int j = 1; j <= i;j++){
            if(i % 2 == 0){
                if(j % 2 != 0){
                    cout<<"0";
                }
                else{
                cout<<"1";
            }
        }else {
                if(j %2 !=0){
                    cout<<"1";
                }else{
                    cout<<"0";
                }
            }
        }
         cout<<endl;
    }
   


return 0;
}
