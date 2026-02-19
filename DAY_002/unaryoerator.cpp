#include<iostream>
using namespace std;

int main(){
    
    int a=10;
    int b= ++a; 
    cout<<"Value of b after pre-incrementing a: "<<b<<endl;
    
    c=10;
    d=c++;
    cout<<"Value of d after post-incrementing a: "<<d<<endl;

    cout<<'A'+ b++ +1<<endl;           
    cout<<'A'+ ++b +1<<endl;  
    
    int c=5;
    int x = c++ + ++c;     
    cout<< c <<" "<< x << endl;
    return 0;
}