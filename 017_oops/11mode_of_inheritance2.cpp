#include <bits/stdc++.h>
using namespace std;

class Parent
{
protected: // Protected-> access modifier for mode of inheritance
    int password = 1234;
    Parent()
    {
        cout << password << endl;
    }
};

class child : public Parent
{
public:
    void displayPassword()
    {
        cout << "Password: " << password << endl; // Child class can access protected members of parent class
    }
};

int main()
{
    // Inheritance can be categorized into different types based on how the classes are related to each other. The main types of inheritance are:
    // 1. Single Inheritance: A derived class inherits from a single base class.
    // 2. Multiple Inheritance: A derived class inherits from multiple base classes.
    // 3. Multilevel Inheritance: A derived class inherits from a base class, which in turn inherits from another base class.
    // 4. Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
    // 5. Hybrid Inheritance: A combination of two or more types of inheritance.
/*
Base member      |     Type of inheritance
 access specifier| public    |   protected   |   private
 __________________________________________________________
Public           |public    |   protected   |   private
Protected        |protected |   protected   |   private
private          |private    |   private   |   private
*/

    child c;
    c.displayPassword();
    return 0;
}