#include <bits/stdc++.h>
using namespace std;

//getters and setters
    //getters: member functions that are used to access the private members of a class. 
    //setters: member functions that are used to modify the private members of a class.

class Student {
    private:
        string name;
        int age;
    public:
        //setter for name
        void setName(string n) {
            name = n;
        }
        //getter for name
        string getName() {
            return name;
        }
        //setter for age
        void setAge(int a) {
            age = a;
        }
        //getter for age
        int getAge() {
            return age;
        }
};

int main() {
    Student s1;
    //setName and setAge are used for input and getName and getAge are used for output
    s1.setName("John");
    s1.setAge(20);  
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    return 0;
}
