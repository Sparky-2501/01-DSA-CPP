#include <bits/stdc++.h>
using namespace std;

class Animal{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
    void sleep()
    {
        cout << "Sleeping..." << endl;
    }
};

class Dog: public Animal{       //Public-> access modifier for mode of inheritance
private:
    string breed;
public:
    void setBreed(string b)
    {
        breed = b;
    }
    void displayBreed()
    {
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    // Inheritance is a fundamental object-oriented programming concept that allows a new class (called a derived class or child class) to inherit properties and behaviors (data members and member functions) from an existing class (called a base class or parent class).
    // This promotes code reusability and establishes a natural hierarchical relationship between classes.
    Dog d;
    d.eat(); // Inherited from Animal class
    d.sleep(); // Inherited from Animal class
    d.setBreed("Labrador");
    return 0;
}