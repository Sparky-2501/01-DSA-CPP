#include <bits/stdc++.h>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor is called" << endl;
    }
    ~A() {
        cout << "Destructor is called" << endl;
    }
};

int main() {
    A obj;  
    return 0;
}