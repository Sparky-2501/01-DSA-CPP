#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int a = 10;
public:
    void display()
    {
        
        cout << "I am a parent class" << endl;
    }
};
class Child : public Parent
{
public:
    void displayChild()
    {
        cout << a * a;
        cout << "I am a child class" << endl;
    }
};

int main()
{
    // 1 parent 1 child class
    // child class can access parent class members
    Child c;
    c.display();      // Calls parent's display function
    c.displayChild(); // Calls child's displayChild function
    return 0;
}