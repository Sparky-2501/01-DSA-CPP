#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age>=18){
        if(age>=35){
            cout<<"you are eligible to vote and also eligible for contesting in elections"<<endl;
        }
        else{
            cout<<"you are eligible for voting"<<endl;
        }
    }
    else{
        cout<<"you are not eligible for voting"<<endl;
    }

    //_________________MAXIMUM OF NUMBERS using ternanry operator_______________//
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    (a>b) ? cout<<a<<endl : cout<<b<<endl;
    return 0;
}