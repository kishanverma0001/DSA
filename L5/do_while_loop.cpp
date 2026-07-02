#include<iostream>
using namespace std;

int main(){
    int i = 1;

    while(i > 5){
        cout<<"while loop"<<endl;
    }
// work gets done atleast once irrespective of condition i > 5 never true
    do{
        cout<<"do while loop"<<endl; 
    }while(i>5);
 return 0;
}