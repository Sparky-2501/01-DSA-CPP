#include <bits/stdc++.h>
using namespace std;

class Base1 {
public:
int a = 10;
    Base1() {
        cout << "Base1 constructor called" << endl;
    }
    void display() {
        cout << "Base1 display function" << endl;
    }
};

class Base2{
    public:
    int b=20;
    Base2() {
        cout << "Base2 constructor called" << endl;
    }
    void display() {
        cout << "Base2 display function" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << a + b << endl;
    }
    void display() {
        cout << "Derived display function" << endl;
    }
};

int main() {
    // Multiple Inheritance: A class can inherit from more than one base class.
    Derived d;
    d.Base1::display(); // calls Base1 version
    d.Base2::display(); // calls Base2 version
    d.display(); // Calls Derived's display function    
    return 0;
}