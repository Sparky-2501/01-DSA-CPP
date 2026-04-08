#include <bits/stdc++.h>
using namespace std;

class A {
    public:
        int x;
        A(int x) {
            this->x = x;
        }
        A(A &a) {
            this->x = a.x;
        }
    }; 

int main() {
    // shallow copy and deep copy are two types of copying an object
    // shallow copy is a bitwise copy of an object, it copies the values of the data members of the object, but it does not copy the objects pointed to by the data members
    // deep copy is a copy of an object, it copies the values of the data members of the object, and it also copies the objects pointed to by the data members
    A obj1(5);
    A obj2(obj1); // shallow copy is done here, it copies the value of x, but it does not copy the object pointed to by x
    cout << obj1.x << " " << obj2.x << endl; // 5 5
    return 0;
}