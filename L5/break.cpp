#include<iostream>
using namespace std;

int main(){
    for(int i = 1;i <= 10;i++){
        if(i == 3){
            break;
        }
        cout<< i <<endl;
    }
    cout<<"out of loop now"<<endl;
    return 0;
}
