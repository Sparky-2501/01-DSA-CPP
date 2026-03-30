#include <bits/stdc++.h>
using namespace std;

class Student{
    public:

    //properties
        string name;
        int age;
        int roll_no;
        float marks;
        float percentage;
    
    //functions
        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << roll_no << endl;
        }

        void calculate_percentage(){
            percentage = (marks/500)*100;
            cout << "percentage: " << percentage << "%" << endl;
        }   
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.roll_no = 101;
    s1.marks = 446;

    s1.display();
    s1.calculate_percentage();
    return 0;
}


/*
1.we create a class with some properties and functions.
2.create an object inside the main function and assign values to the properties and call the functions to display the values and calculate the percentage.
*/