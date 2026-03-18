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

    //bit masking => getting specific bit from the number
    //n&1 => getting last bit
    //n&2 => getting 2nd last bit
    //n&4 => getting 3rd last bit
    //n&8 => getting 4th last bit

    int num=4; //0100

    if(num & 1 == 1){//0100 & 0001 => 0000 => 0 (last bit is 0)
        cout<<"last bit is 1"<<endl;
    }
    else{
        cout<<"last bit is 0"<<endl;
    }
    if(num & (1 << 1)){//0100 & 0010 => 0000 => 0 (2nd last bit is 0)
        cout<<"2nd last bit is 1"<<endl;
    }
    else{
        cout<<"2nd last bit is 0"<<endl;
    }
    if(num & (1 << 2) == (1 << 2)){//0100 & 0100 => 0100 => 4 (3rd last bit is 1)
        cout<<"3rd last bit is 1"<<endl;
    }
    else{
        cout<<"3rd last bit is 0"<<endl;
    }
    if(num & (1 << 3) == (1 << 3)){//0100 & 1000 => 0000 => 0 (4th last bit is 0) 
        cout<<"4th last bit is 1"<<endl;
    }
    else{
        cout<<"4th last bit is 0"<<endl;
    }
    return 0;
}