#include <bits/stdc++.h>
using namespace std;

int main() {
    //bit masking => getting specific bit from the number
    //n&1 => getting last bit
    //n&(1<<1) => getting 2nd last bit
    //n&(1<<2) => getting 3rd last bit
    //n&(1<<3) => getting 4th last bit

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