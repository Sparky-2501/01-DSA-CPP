#include <bits/stdc++.h>
using namespace std;

int main()
{
    // subarray and subsequence 
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            // cout<< "(" << arr[i] << "," << arr[j] << ")" << ", ";
            cout << "(";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << ")";
        }
        cout << "\n";
    }
    return 0;
}