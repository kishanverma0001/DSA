#include<iostream>
using namespace std;

class User{
    int id;
    string password;

public:
    User(int id){
        // this->password = password;
        // this->username = username;
        this->id = id;
    }
    string username;  
    
    // Setter
    void setPassword(string password){
        this->password = password;
    }

    // Getter
    string getPassword(){
        return password;
    }

};

int main(){
    User user1(123);
    user1.username = "kishan";
    user1.setPassword("kishan@1234");
    
    cout<<"username : "<<user1.username<<endl;
    cout<<"password : "<<user1.getPassword()<<endl;
    return 0;
}