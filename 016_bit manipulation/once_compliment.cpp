#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    binary not operator
    ~1 = 0
    ~0 = 1
    ~5 = ~(0000 0101) = 1111 1010 = -6
    */
    //    int num=5;
    //    cout<< ~num<<endl;

    //    for(int i = 0 ; i<5 ; i++){
    //        cout<< i << ":" << ~i << " \n";
    //    }

    //MSB=>1 negative number
    //MSB=>0 positive number
        int num = 5;
        cout<< ~num + 1 <<endl; // -5
        cout<< -(~num) <<endl; // -5
        cout<< -(num) <<endl; // -5
    return 0;
}