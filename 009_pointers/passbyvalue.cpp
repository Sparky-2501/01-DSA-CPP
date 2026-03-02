#include<iostream>
using namespace std;

void changeA(int a){
    a=20;
    cout<< "function :"<< a << "\n";
}
int main(){
    // PASS BY VALUE: when parameter is a copy of actual argument variable in memory.
    int a=10;
    changeA(a);
    cout<< "main function :" << a << "\n";
    return 0;
}