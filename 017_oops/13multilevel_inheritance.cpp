#include<bits/stdc++.h>
using namespace std;

class GrandParent
{
public:
    GrandParent()
    {
        cout << "GrandParent constructor called" << endl;
    }
};  
class Parent : public GrandParent
{   
public:
    Parent()
    {
        cout << "Parent constructor called" << endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "Child constructor called" << endl;
    }
};

int main()
{
    // 1 grandparent 1 parent 1 child class
    // child class can access both parent and grandparent class members
    Child c;
    return 0;
}