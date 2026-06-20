#include <bits/stdc++.h>
using namespace std;
//tiling problem :
// Given a board of size 2*N and tiles of size 2*1, find the number of ways to tile the board.
// The tiles can be placed either horizontally or vertically.
// The problem can be solved using dynamic programming. The number of ways to tile a 2*N board can be expressed as the sum of the number of ways to tile a 2*(N-1) board and the number of ways to tile a 2*(N-2) board. This is because if we place a tile vertically, we are left with a 2*(N-1) board, and if we place two tiles horizontally, we are left with a 2*(N-2) board.
// The base cases are:
    // dp[0] = 1 (there is one way to tile a 2*0 board, which is to do nothing)
    // dp[1] = 1 (there is one way to tile a 2*1 board, which is to place one tile vertically)
    // The recursive relation is:
    // dp[n] = dp[n-1] + dp[n-2] for n > 1
    // The time complexity of this solution is O(n) and the space complexity is O(n) due to the dp array.

int main() {
    int n;
    cin >> n;
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << endl;
    return 0;
}