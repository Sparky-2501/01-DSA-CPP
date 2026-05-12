#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor of A called"<<endl;
    }
    ~A(){
        cout<<"Destructor of A called"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"Constructor of B called"<<endl;
    }
    ~B(){
        cout<<"Destructor of B called"<<endl;
    }
};

int main() {
    B obj;
    return 0;
}