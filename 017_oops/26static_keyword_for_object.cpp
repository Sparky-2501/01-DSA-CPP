#include <bits/stdc++.h>
using namespace std;

class Example {
public:
    Example() {
        cout << "Constructor called" << endl;
    }
    ~Example() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    int a=0;
    if(a==0) {
        Example obj1; // Constructor will be called here
    } // Destructor will be called here when obj1 goes out of scope

    cout<< "End of main function" << endl;
    
    return 0;
}