/* Question 2 : Write a C++ program that takes a year from the user and print whether that year is a leap year or not.
year / 4 >> leap year
for centuary year>> year/400 leap year
*/
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year : ";
    cin>>year;

    if(year % 4 == 0 && year % 100 != 0){
        cout<<year<<" is a leap year."<<endl;
    }else if(year % 400 == 0){
        cout<<year<<" is a leap year."<<endl;
    }else{
        cout<<year<<" is not a leap year."<<endl;
    }
return 0;
}