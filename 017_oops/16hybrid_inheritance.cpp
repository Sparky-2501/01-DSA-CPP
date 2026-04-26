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
public:    Derived2() {
        cout << a-2 << endl;
        cout << "Derived2 constructor called" << endl;
    }
    void display() {
        cout << "Derived2 display function" << endl;
    }
};

class Hybrid : public Derived1, public Derived2 {
public:
    Hybrid() {
        cout << "Hybrid constructor called" << endl;
    }
    void display() {
        cout << "Hybrid display function" << endl;
    }
};

int main() {
    // Hybrid Inheritance: A combination of two or more types of inheritance.
    Hybrid h;
    h.display();
    return 0;
}