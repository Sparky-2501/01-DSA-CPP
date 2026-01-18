#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int *ptr =&a;
    cout<< sizeof(char) << "char\n";
    cout<< sizeof(short) << "short\n";
    cout<< sizeof(int) << "int\n";
    cout<< sizeof(long) << "long\n";
    cout<< sizeof(long long) << "long long\n";
    cout<< sizeof(ptr) << "ptr\n";

    return 0;
}