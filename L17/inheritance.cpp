#include<iostream>
using namespace std;

// single inheritance
class Animal{
   
    public:
        string color;

        void eat(){
            cout<<"eats\n";
        }

        void breath(){
            cout<<"breaths\n";
        }
};

class Fish : public Animal{
    public:
        int fins;

        void swim(){
            cout<<"swims\n";
        }
};

int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breath();
    return 0;
}