#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Constractor of parent\n";
        }
        ~Parent(){
            cout<<"Destractor of parent\n";
        }
};

class Child : public Parent{
    public:
        Child(){
            cout<<"Constractor of child\n";
        }
        ~Child(){
            cout<<"Destractor of child\n";
        }
};

int main(){
    Child child1;
    return 0;
}