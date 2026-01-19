#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    // sizeof(arr)  => total spaces into space for 1 => 4 bytes *spaces
    // sizeof(arr[0]) => 4 : size of int for storing 1 element

    cout << sizeof(arr) / sizeof(arr[0]);
    return 0;
}