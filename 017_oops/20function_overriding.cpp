#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};
class Derived : public Base {
public:    void display() {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Derived d;
    d.display();  // Calls Derived class display function
    return 0;
}