#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;

    char operation;
    cout<<"select operation to perform on numbers (+, -, *, /): ";
    cin>>operation;

    switch(operation){
        case '+':cout<<a+b<<endl;
        break;
        case '2': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '/': 
            if(b!=0){
                cout<<a/b<<endl;
            }
            else{
                cout<<"division by zero is not allowed"<<endl;
            }
        break;
        default: cout<<"invalid operation selected"<<endl;
    }
    return 0;
}