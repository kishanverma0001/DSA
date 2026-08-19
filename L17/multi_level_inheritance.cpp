#include<iostream>
using namespace std;

class Animal{
   public: 
        void eat(){
            cout<<"eats"<<endl;
        }
        void breath(){
            cout<<"breaths"<<endl;
        }
};

class Mammal : public Animal{
    public:
        string bloodType;
        Mammal(){
            bloodType = "warm";
        }
        
};

class Dog : public Mammal{
    public:
        void tailWag(){
            cout<<"A dog wags its tail"<<endl;
        }
};

int main(){
    Dog d1;
    d1.eat(); // from Animal class
    cout<<d1.bloodType<<endl;  // from Mammal class
    d1.breath(); // from Animal class
    d1.tailWag(); // from Dog class
    return 0;
}