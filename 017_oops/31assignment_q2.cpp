#include <bits/stdc++.h>
using namespace std;

class parent {
public:
    void display() {
        cout << "I am a parent class" << endl;
    }
};

class child : public parent {
public:
    void display() {
        cout << "I am a child class" << endl;
    }
};

int main() {
    parent* p = new child();
    p->display();
    delete p;
    return 0;
}