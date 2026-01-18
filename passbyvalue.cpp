#include<iostream>
using namespace std;

void changeA(int a){
    a=20;
    cout<< "function :"<< a << "\n";
}
int main(){

    int a=10;
    changeA(a);
    cout<< "main function :" << a << "\n";
    return 0;
}