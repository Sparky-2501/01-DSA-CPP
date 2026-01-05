#include<iostream>
using namespace std;

int main(){

    /*Question 1 : Write a C++ program to get a number 
    from the user and print whether it's positive, negative or zero.*/

    //METHOSD-1
    int number;
    cout<<"enter a number: ";   
    cin>>number;
    if(number>0){
        cout<<"the number is positive"<<endl;
    }
    else if(number<0){
        cout<<"the number is negative"<<endl;
    }
    else{
        cout<<"the number is zero"<<endl;
    }

    //METHOD-2 using ternary operator
    int num;
    cout<<"enter a number:";
    cin>>num;
    (num>0) ? cout<<"the number is positive" : (num==0) ? cout<<"the number is zero" : cout<<"the number is negative";
    return 0;
}