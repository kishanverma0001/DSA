#include<iostream>
using namespace std;

class Student{
    
public:
        string name; // properties
        float cgpa;

        // Methods
        void getPercentage(){
            cout<<(cgpa * 10)<<"% \n";
        }
};

class User{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"deleting account\n";
    }

    void editBio(string newBio){
        bio = newBio;
    }
};

int main(){
    Student s1; // object
    // cout<<sizeof(s1)<<endl;
    s1.name = "kishan";
    s1.cgpa = 7.45;
    cout<<s1.name<<endl;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
    return 0;
}