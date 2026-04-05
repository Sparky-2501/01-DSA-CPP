#include <bits/stdc++.h>
using namespace std;

class User{

    int id;
    string password;

    public:
    string username;

    User(int id){
        this->id = id;
    }

    string getPassword(){
        return password;
    }
    void setPassword(string password){
        this->password = password;
    }

};

int main() {
    User u1(1);
    u1.username = "Alice";
    cout << u1.username << endl;
    return 0;
}