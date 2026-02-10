#include <bits/stdc++.h>
using namespace std;

void search1(int arr[4][4], int n, int m)
{
    int target = 31;
    int i = 0, j = m - 1;
    for (int k = 0; k < n * 2; k++)
    {
        if (arr[i][j] == target)
        {
            cout << arr[i][j];
            return;
        }
        else if (arr[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "not found";
}

void search2(int arr[4][4], int n, int m)
{
    int target = 31;
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == target)
        {
            cout << arr[i][j];
            return;
        }
        else if (arr[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "not found";
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {11, 12, 13, 14},
                     {21, 22, 23, 24},
                     {31, 32, 33, 34}};
    search1(arr, 4, 4);
    return 0;
}
