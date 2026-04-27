#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show function" << endl;
    }
};

int main()
{
    // Polymorphism: The ability of a function, object, or operator to take on multiple forms.
    // Types of Polymorphism:
    // 1. Compile-time Polymorphism: Achieved through function overloading and operator overloading.
    // 2. Run-time Polymorphism: Achieved through inheritance and virtual functions.
    Base *basePtr; // Base class pointer
    Derived derivedObj; // Derived class object
    return 0;
}