#include <bits/stdc++.h>
using namespace std;

void SpiralMatrix(int arr[][3], int n, int m)
{
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // top row
        for (int i = scol; i <= ecol; i++)
            cout << arr[srow][i] << " ";
        srow++;

        // right column
        for (int i = srow; i <= erow; i++)
            cout << arr[i][ecol] << " ";
        ecol--;

        // bottom row
        if (srow <= erow)
        {
            for (int i = ecol; i >= scol; i--)
                cout << arr[erow][i] << " ";
            erow--;
        }

        // left column
        if (scol <= ecol)
        {
            for (int i = erow; i >= srow; i--)
                cout << arr[i][scol] << " ";
            scol++;
        }
    }
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    SpiralMatrix(arr, 3, 3);
    return 0;
}
