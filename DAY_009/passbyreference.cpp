#include<iostream>
using namespace std;

void changeA(int *ptr){
    *ptr=20;
    cout<< "function :"<< *ptr << "\n";
}
int main(){
    // PASS BY REFERENCE: when we pass the reference of argument to the function.
    int a=10;
    cout<< "main function :" << a << "\n";
    changeA(&a);
    cout<< "after function :" << a << "\n";

    return 0;
}