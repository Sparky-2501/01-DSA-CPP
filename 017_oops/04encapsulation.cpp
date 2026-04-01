#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    int id; // private data member, cannot be accessed outside the class
public:
    void setId(int id) { // public member function to set the value of id
        this->id = id; // using 'this' pointer to refer to the current object's id
    }
    int getId() { // public member function to get the value of id
        return id; // returning the value of id
    }
};  

int main() {
    // wrapping up of data and member function (methods) into a single unit (class) is called encapsulation
    // also implement data hiding (restricting access to some of the object's components) is also a part of encapsulation
    // we can achieve encapsulation in C++ using classes and access specifiers (public, private, protected)

    return 0;
}