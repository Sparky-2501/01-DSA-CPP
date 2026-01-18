#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<"a: " << a << "\n";  //10
    cout<<"&a: " << &a << "\n"; //0x
    cout<<"ptr: " << ptr << "\n";   //0x
    cout<<"*ptr: " << *ptr << "\n"; //10   :dereference operator

    int *ptr2 = NULL;
    cout << "ptr2: " << ptr2 << "\n";
    cout << "*ptr2: " << *ptr2 << "\n";    //segmentation fault : never dereference null pointer
    cout<< "will not print." ; 

    return 0;
}