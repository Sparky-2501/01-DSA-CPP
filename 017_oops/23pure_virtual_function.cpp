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
    Derived d;
    d.display();
    return 0;
}