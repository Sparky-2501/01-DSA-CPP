#include <bits/stdc++.h>
using namespace std;

class A {
    public:
        int x; //public member
    private:
        int y; //private member
    protected:
        int z; //protected member
};

int main() {
    //access modifiers
    //1.public: members are accessible from outside the class.  
    //2.private: members are not accessible from outside the class. they can only be accessed by member functions of the class.
    //3.protected: members are not accessible from outside the class. they can only be accessed by member functions of the class and derived classes.   
    
    A a;
    a.x = 10; //allowed
    //a.y = 20; //not allowed
    //a.z = 30; //not allowed
    return 0;
}