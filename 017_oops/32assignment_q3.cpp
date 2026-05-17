//Question3: Create a base class Person with attributes name and age. Derive a class Student from Person and add an additional attribute studentID.
// Implement a method displayStudentInfo() in the Student class to display all details. 
//In the main function, a Student class object will be created in this format: Student student("Alice", 20, "S12345");
#include <bits/stdc++.h>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
private:
    string studentID;

public:
//                           Child(intx):Parent(x)
    Student(string n, int a, string id) : Person(n, a) {
        studentID = id;
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student student("Alice", 20, "S12345");
    student.displayStudentInfo();

    return 0;
}