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
    //overriding - parent and child having ame function name and same signature
    //parent fucntion is overridden by child function 
    Derived d;
    d.display();  // Calls Derived class display function
    return 0;
}