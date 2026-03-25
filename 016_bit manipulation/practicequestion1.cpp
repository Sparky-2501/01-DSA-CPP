#include <bits/stdc++.h>
using namespace std;
// Write a Function to clear the range of bits from i to j in a given number. (i & j are counted backwards from the right end of the number)
void clearmethod1(int num, int i, int j)
{
    for (int k = i; k <= j; k++)
    {
        num = num & ~(1 << k);
    }
    cout << num;
}

void clearmethod2(int num, int i, int j)
{
   int a = ~0 << (j + 1); // left part of the number with 0s from j to 0
    int b = (1 << i) - 1; // right part of the number with 0s from i to end
    num = num & (a | b);
    cout << num;

}

int main()
{
    int num, i, j;
    cin >> num >> i >> j;
    clearmethod1(num, i, j);
    clearmethod2(num, i, j);
    return 0;
}