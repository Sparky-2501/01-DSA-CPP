//check if an array is sorted or not using recursion
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    // Base case
    if (n == 1) {
        return true;
    }
    // Recursive case
    if (arr[0] < arr[1]) {
        return isSorted(arr + 1, n - 1);
    } else {
        return false;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}