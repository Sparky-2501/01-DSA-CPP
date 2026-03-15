#include <bits/stdc++.h>
using namespace std;

int main() {
    //&& - logical AND
    //& - bitwise AND
    // | - bitwise OR
    // ^ - bitwise XOR
    // 3 & 5 = 011 & 101 = 001 = 1  { 00=0 01=0 10=0 11=1 }
    // 3 | 5 = 011 | 101 = 111 = 7  { 00=0 01=1 10=1 11=1 }
    // 3 ^ 5 = 011 ^ 101 = 110 = 6  { 00=0 01=1 10=1 11=0 }
    int a = 4, b = 5;
    cout << (a & b) << endl; // 0100 & 0101=0100=4
    cout << (a | b) << endl; // 0100 | 0101=0101=5
    cout << (a ^ b) << endl; // 0100 ^ 0101=0001=1

    return 0;
}