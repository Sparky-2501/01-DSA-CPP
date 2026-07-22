//recursivefunctiontoperformBinarySearch

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int k) {
    if (low > high) {
        return -1; // termination case 
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == k) {
        return mid; // index of element
    }
    if (arr[mid] > k) {
        return binarySearch(arr, low, mid - 1, k);
    } else {
        return binarySearch(arr, mid + 1, high, k);
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n=7,k=5;

    int result = binarySearch(arr, 0, n - 1, k);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}