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
    // copy constructor is used to create a new object from an existing object
    // it is a constructor which takes an object of the same class as a parameter
    
    A obj1(5);
    A obj2(obj1); // copy constructor is called here
    cout << obj1.x << " " << obj2.x << endl; // 5 5
    return 0;
}