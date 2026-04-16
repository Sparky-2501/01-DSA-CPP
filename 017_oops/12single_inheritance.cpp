#include <bits/stdc++.h>
using namespace std;

class Parent
{
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