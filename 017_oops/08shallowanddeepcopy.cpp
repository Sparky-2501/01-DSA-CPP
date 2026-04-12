#include <bits/stdc++.h>
using namespace std;

class A {
    public:
        int x;
        int y;
        int *ptr;

        A(int x, int y) {
            this->x = x;
            this->y = y;
            ptr = new int; // dynamic memory allocation
            *ptr = 12; // assign value to the pointer

        }
        A(A &a) {
            x = a.x;
            y = a.y;
            ptr = a.ptr; // shallow copy, it copies the value of the pointer, but it does not copy the object pointed to by the pointer
        }
    }; 

int main() {
    // shallow copy and deep copy are two types of copying an object
    // shallow copy is a bitwise copy of an object, it copies the values of the data members of the object, but it does not copy the objects pointed to by the data members
    // deep copy is a copy of an object, it copies the values of the data members of the object, and it also copies the objects pointed to by the data members
    A obj1(5,20);
    A obj2(obj1); // shallow copy is done here, it copies the value of x, but it does not copy the object pointed to by x
    cout << obj2.x << " " << obj2.y<< " " << *obj2.ptr << endl; // 5 20 12
    return 0;
}