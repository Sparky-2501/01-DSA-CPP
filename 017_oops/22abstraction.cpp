#include <bits/stdc++.h>
using namespace std;

class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function makes this class abstract
};  

class DerivedClass : public AbstractClass {
public:    void pureVirtualFunction() override {
        cout << "Implementation of pure virtual function in DerivedClass" << endl;
    }
};

int main() {
    // Abstraction is the process of hiding the implementation details and showing only the functionality to the user.
    // It is achieved using classes and objects in C++. 
    DerivedClass obj;
    obj.pureVirtualFunction(); // Calls the implementation of the pure virtual function in DerivedClass
    return 0;
}