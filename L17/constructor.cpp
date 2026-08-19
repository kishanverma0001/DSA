#include<iostream>
using namespace std;

class Car{
    string name;
    string color;

public:
    Car(string nameVal, string colorVal) {
        cout<<"constructor is called. object being created...\n";
        name = nameVal;
        color = colorVal;
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
    Car c1("maruti 800", "white");
    cout<<"car name : "<<c1.getName()<<endl;
    cout<<"car color : "<<c1.getColor()<<endl;
    return 0;
}