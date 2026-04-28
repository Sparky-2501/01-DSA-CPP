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

//compile-time polymorphism example
void display(int a)
{
    cout << "Display function with integer: " << a << endl;
}
void display(double b)
{
    cout << "Display function with double: " << b << endl;
}

//run-time polymorphism example
void demonstratePolymorphism(Base *basePtr)
{
    basePtr->show(); // Calls the appropriate show function based on the actual object type
}

int main()
{
    // Polymorphism: The ability of a function, object, or operator to take on multiple forms.
    // Types of Polymorphism:
    // 1. Compile-time Polymorphism: Achieved through function overloading and operator overloading.
    // 2. Run-time Polymorphism: Achieved through inheritance and virtual functions.
    Base *basePtr; // Base class pointer
    Derived derivedObj; // Derived class object
    basePtr = &derivedObj; // Pointing to the derived object
    demonstratePolymorphism(basePtr); // Calls Derived::show()
    return 0;
}