#include<iostream>
using namespace std;

float sum(float a,float b){
    float sum = a + b; // a,b parameters
    cout<<"sum = "<<sum<<endl;
    return sum;
}
float diff(float a,float b = 1 ){ // here b = 1 default parameter
    float diff = a - b; // a,b parameters
    cout<<"diff = "<<diff<<endl;
    return diff;
}

int main(){
 
    sum(5.4,7); //5.4 ,7  are arguments
    diff(5);
    diff(10,4.7);
return 0;
}