#include <bits/stdc++.h>
using namespace std;

class Counter {
private:
    int count;
    static int s_count;

public:
    Counter() {
        count = 0;
        s_count++;
    }

    void displayCount() {
        cout << "Instance Count: " << count << endl;
        cout << "Static Count: " << s_count << endl;
    }
};

//scope operator to initialize the static member variable
int Counter::s_count = 0;

int main() {
    Counter c1;
    c1.displayCount();
    Counter c2;
    c2.displayCount();
    return 0;
}