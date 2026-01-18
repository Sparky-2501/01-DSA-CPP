#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=10;
    int b=20;
    int *ptr1= &a;
    int *ptr2 = &b;
    ptr1 = ptr2;
    cout<< ptr1 << "\n" << ptr2 << "\n" << &a ; 
    return 0;
}