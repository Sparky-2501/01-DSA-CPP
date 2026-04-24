#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    int a = 10;
    Base() {
        cout << "Base constructor called" << endl;
    }
    void display() {
        cout << "Base display function" << endl;
    }
};

class Derived1 : public Base {
public:
    Derived1() {
        cout << a+a << endl;
        cout << "Derived1 constructor called" << endl;
    }
    void display() {
        cout << "Derived1 display function" << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2() {
        cout << a-2 << endl;
        cout << "Derived2 constructor called" << endl;
    }
    void display() {
        cout << "Derived2 display function" << endl;
    }
};

int main() {
    // Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
    Derived1 d1;
    Derived2 d2;
    return 0;
}