//first occurence of an element in an array using recursion
#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int x, int i) {
    if (i == n) {   // full traverse last tk gya exist hi nhi karta 
        return -1;
    }
    if (arr[i] == x) {
        return i;
    }
    return firstOccurrence(arr, n, x, i + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result = firstOccurrence(arr, n, x, 0);
    if (result != -1) {
        cout << "First occurrence of " << x << " is at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}