#include<iostream>
using namespace std;

int main(){
    //Question 2 : Write a C++ program that takes a year from the user and print whether that year is a leap year or not.
    int year;
    cout<<"enter a year: ";
    cin>>year;
    if(year % 4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                cout<<"leap year"<<endl;
            }
        }
        else
        {
            cout<<"leap year"<<endl;
        }
    }
    else{
        cout<<"not a leap year"<<endl;
    }
    return 0;
}

//52:24
