#include <bits/stdc++.h>
using namespace std;


class MyClass {
private:
    int privateData;
public:
    MyClass(int data) : privateData(data) {}
    // Declare a friend function that can access private members of MyClass
    friend void displayPrivateData(MyClass& obj);
};
// Definition of the friend function
void displayPrivateData(MyClass& obj) {
    cout << "Private Data: " << obj.privateData << endl;
}

int main() {
    // Friend functions are non-member functions that have access to the private and protected members of a class. They are declared using the 'friend' keyword inside the class definition.
    // Friend functions can be useful when you want to allow a specific function to access the private members of a class without making it a member function of the class. This can help in situations where you want to perform operations that are not logically part of the class but still need access to its internals.
    // Friend classes are classes that have access to the private and protected members of another class. They are declared using the 'friend' keyword inside the class definition. A friend class can access the private members of the class that declares it as a friend, but it does not have access to the private members of other classes.
    // Friend functions and friend classes can be useful in certain situations, but they should be used judiciously as they can break encapsulation and make the code harder to maintain. It is generally recommended to use them only when necessary and to keep their usage limited to specific cases where they provide a clear benefit.
    // Example of a friend function
    MyClass obj(42);
    displayPrivateData(obj);
    return 0;
}