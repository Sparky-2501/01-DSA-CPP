#include <bits/stdc++.h>
using namespace std;
// Write a Function to clear the range of bits from i to j in a given number. (i & j are counted backwards from the right end of the number)
int clear(int num, int i, int j)
{
    for (int k = i; k <= j; k++)
    {
        num = num & ~(1 << k);
    }
    return num;
}

int main()
{
    int num, i, j;
    cin >> num >> i >> j;
    int res = clear(num, i, j);
    cout << res;
    return 0;
}