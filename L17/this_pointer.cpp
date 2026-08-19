#include<iostream>
using namespace std;

class Car{
    string name;
    string color;

public:
    // constructor overloading
    Car(){
        cout<<"constructor without parameter\n";
    }

    Car(string name, string color) {
        cout<<"constructor with parameters\n";
        this->name = name; // this pointer
        (*this).color = color;
    }

    void start(){
        cout<<"Car has started...\n";
    }

    void stop(){
        cout<<"Car has stoped...\n";
    }

    // Getter
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }
};

int main(){
    Car c0; // non-parameterized
    Car c1("maruti 800", "white"); // parameterized
    cout<<"car name : "<<c1.getName()<<endl;
    cout<<"car color : "<<c1.getColor()<<endl;
    return 0;
}