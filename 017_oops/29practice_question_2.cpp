#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout<<"Base class print function "<<endl;
    }
};

class Derived: public Base{
    public:
    void print() override{
        cout<<"Derived class print function "<<endl;
    }
};

int main() {
    Base* ptr = new Derived();  //ptr points derived class object but type of ptr is base class pointer
    ptr->print(); // This will call the Derived class print function due to polymorphism
    delete ptr; // Clean up memory
    return 0;
}