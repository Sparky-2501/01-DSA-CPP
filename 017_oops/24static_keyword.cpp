#include <bits/stdc++.h>
using namespace std;

 class Counter {
    public:
        static int count; // Static variable declaration
        Counter() {
            count++; // Increment count for each object created
        }
    };

int Counter::count = 0; // Definition of static variable

int main() {
    // Static variables are shared among all instances of a class
   // They are initialized only once and retain their value across all instances
   // In this example, the static variable 'count' will keep track of the number of Counter objects created
    Counter c1;
    Counter c2;
    cout << "Count: " << Counter::count << endl;
    return 0;
}