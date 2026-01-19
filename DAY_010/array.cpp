#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[10];                 // array of fixed size 10 but all with random garbage values
    int arr2[10] = {1, 2, 3};     // created array of size 10 starting from index 0 to 9 with assigned value  0:1 , 1:2 , 2:3
    int arr3[] = {1, 2, 3, 4, 5}; // array of fixed size of 5
    for (int i = 0; i < 10; i++)
    {
        cout << "array1 :" <<arr1[i] << "\n";
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "array2 :"<< arr2[i] << "\n";
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "array3 :"<< arr3[i] << "\n";
    }
    return 0;
}