/*Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)*/

#include<iostream>
using namespace std;

int main(){
    float pencil_price;
    float pen_price;
    float eraser_price;

    cout<<"Enter pencil price : ";
    cin>>pencil_price;

    cout<<"Enter pen price : ";
    cin>>pen_price;

    cout<<"Enter eraser price : ";
    cin>>eraser_price;

    float total_cost = pencil_price + pen_price + eraser_price;

    float gst_tax = (total_cost * 18) / 100;

    cout<<"Total cost of 3 items = "<<total_cost<<endl;
    
    cout<<"Total cost after 18% gst tax = "<<gst_tax + total_cost<<endl;

    return 0;
}