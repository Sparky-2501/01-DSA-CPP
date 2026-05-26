#include <bits/stdc++.h>
using namespace std;

int lastoccurance(int arr[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == x)
    {
        return i;
    }
    return lastoccurance(arr, n, x, i - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4, 2, 2, 5, 7, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = lastoccurance(arr, n, x, n - 1);
    if (result != -1)
    {
        cout << "Last occurence of " << x << " is at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}