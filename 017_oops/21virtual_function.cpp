#include <bits/stdc++.h>
using namespace std;

class Base{
public:
//compulsory to use virtual keyword in base class function to achieve runtime polymorphism

    virtual void display()
    {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base{
public:
//compulsory to use void display 
    void display()
    {
        cout << "Derived class display function" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->display(); // Calls Derived class display function due to virtual function
    return 0;
}