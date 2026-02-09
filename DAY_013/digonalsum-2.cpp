#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 10},
        {4, 5, 6, 11},
        {7, 8, 9, 12},
        {13, 14, 15, 16}};
    int row = 4;
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i]; // pri diag
        if (i != row - i - 1)
        {
            sum += arr[i][row - i - 1]; // sec diag
        }
    }
    cout << sum;
    return 0;
}