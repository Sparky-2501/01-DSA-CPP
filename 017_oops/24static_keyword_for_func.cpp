#include <bits/stdc++.h>
using namespace std;

 void Counter() {
        int count=0; // Instance variable
        static int s_count=0; // Static variable
        count++;
        s_count++;
        cout<<"Count: " << count << endl;
        cout<<"Static Count: " << s_count << endl;
    };

int main() {
    // Static variables are shared among all instances of a class
   // They are initialized only once and retain their value across all instances
   // In this example, the static variable 'count' will keep track of the number of Counter objects created
    Counter();
    Counter();
    return 0;
}