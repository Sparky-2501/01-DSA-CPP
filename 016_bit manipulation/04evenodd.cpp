#include <bits/stdc++.h>
using namespace std;

int main() {
    //checking even or odd using bitwise operator
    /*  
    1=0001
    2=0010
    3=0011  
    4=0100
    5=0101
    6=0110
    for all the even numbers last bit is always 0 and for all the odd numbers last bit is always 1
    */

    /*  ? is how to get last bit */
   
    int n=5;
    //0101=>  0101 & 0001 => 0001 => 1 (odd number)
    //0100=>  0100 & 0001 => 0000 => 0 (even number)

    if(n & 1){
        cout<<"odd number"<<endl;
    }
    else{
        cout<<"even number"<<endl;
    }
    cout<< "\n";

    
    return 0;
}