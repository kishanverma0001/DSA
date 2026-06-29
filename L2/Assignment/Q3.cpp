/* Question 3 : Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T) Output :
(P*R*T) / 100
*/

#include<iostream>
using namespace std;

int main(){
    //principal amount
    float principal_amount;
    cout<<"Enter pricipal amount : ";
    cin>>principal_amount;

    //intrest rate
    float intrest_rate;
    cout<<"Enter intrest rate yearly : ";
    cin>>intrest_rate;

    //time
    float time;
    cout<<"Enter yearly time : ";
    cin>>time;

    float simple_intrest;
    simple_intrest = (principal_amount * intrest_rate * time) / 100;

    cout<<"Simple intrest = "<<simple_intrest<<endl;

    return 0;
}