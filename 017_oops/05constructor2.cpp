#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id; // private data member, cannot be accessed outside the class
public:
    Employee()
    {           // default constructor, called when no arguments are passed during object creation
        id = 0; // initializing id to 0
    }
    Employee(int id)
    {                  // parameterized constructor, called when arguments are passed during object creation
        this->id = id; // using 'this' pointer to refer to the current object's id 
    }
    void setId(int id)
    {                  // public member function to set the value of id
        this->id = id; // using 'this' pointer to refer to the current object's id
    }
    int getId()
    {              // public member function to get the value of id
        return id; // returning the value of id
    }
};

int main()
{
    Employee e;
    cout << e.getId() << endl; // Output: 0, default constructor initializes id to 0
    Employee e1(3);
    cout << e1.getId() << endl; // Output: 3
    /* A special method that is automatically called when an object of the class is created
    used for initialization of properties of an object
    
    same name as class
    doesn't have return type
    only called once at creation of object
    memory allocation happens when object of the class is created */


    // same name multiple constructors => constructor overloading
    return 0;
}