#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual void display() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class implementation" << endl;
    }
};

int main() {
    // Base b; // Error: Cannot instantiate an abstract class
    // Base *ptr; // Error: Cannot create pointer to an abstract class
    // ptr = new Base(); // Error: Cannot create object of an abstract class
    // ptr->display(); // Error: Cannot call pure virtual function
    // To use the Derived class, we can create an object of it
    // and call the display function, which is a concrete implementation of the pure virtual function
    Derived d;
    d.display();
    return 0;
}