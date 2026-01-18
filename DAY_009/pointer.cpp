#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<"a: " << a << "\n";  //10
    cout<<"&a: " << &a << "\n"; //0x
    cout<<"ptr: " << ptr << "\n";   //0x
    cout<<"*ptr: " << *ptr << "\n"; //10   :dereference operator
    return 0;
}