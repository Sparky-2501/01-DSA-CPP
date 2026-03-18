#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    Get the ith bit of a number n
    n = 5 (0101)
    i = 0 -> 1
    i = 1 -> 0
    i = 2 -> 1  
    */
   int num=6; // 0110
   int i=2;//1

   if(num & (1 << i)){    //0110 & 0010 => 0010 => 2
        cout<<"bit is 1"<<endl;
   }
   else{
        cout<<"bit is 0"<<endl;
   }
    return 0;
}