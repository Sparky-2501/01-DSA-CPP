#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int *arr = new int[size];

    int x=1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
        return 0;
}

/*
    |              static                 |                dynamic
    compile time                          | runtime
    int arr[100];                         | int * arr = new int[size];
    arr in stack                          | arr in heap
    after func call delete from memory    | after func call ptr delets but not arr so causes memory leak
*/