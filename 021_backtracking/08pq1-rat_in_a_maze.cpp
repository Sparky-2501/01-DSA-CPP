#include <bits/stdc++.h>
using namespace std;


/*Ratina Maze You are given a starting position for a rat which is stuck in a maze at an initial point(0,0)
(the maze can be thought of as a 2-dimensional plane). The maze would be given in the form of a square matrix
of order N*N where the cells with value 0 represent the maze’s blocked locations while value 1 is the open/available
path that the rat can take to reach its destination. The rat's destination is at (N-1, N-1). Your task is to find all 
the possible paths that the rat can take to reach from source to destination in the maze. The possible directions 
that it can take to move in the maze are 'U' (up) i.e. (x, y-1), 'D' (down) i.e. (x, y+1), 'L' (left) i.e. (x-1, y), 'R' (right) i.e. (x+1, y). */

void solve(int row, int col, vector<vector<int>>& maze, vector<vector<int>>& visited, string path, vector<string>& ans, int n) {

    if (row == n - 1 && col == n - 1) {
        ans.push_back(path);
        return;
    }

    // Down, Left, Right, Up
    int dr[] = {1, 0, 0, -1};
    int dc[] = {0, -1, 1, 0};
    char direction[] = {'D', 'L', 'R', 'U'};

    for (int i = 0; i < 4; i++) {

        int newRow = row + dr[i];
        int newCol = col + dc[i];

        // Check if the new position is valid
        if (newRow >= 0 && newRow < n &&
            newCol >= 0 && newCol < n &&
            maze[newRow][newCol] == 1 &&
            visited[newRow][newCol] == 0) {

            // Mark as visited
            visited[newRow][newCol] = 1;

            // Move to the next cell
            solve(newRow, newCol, maze, visited,
                  path + direction[i], ans, n);

            // Backtracking
            visited[newRow][newCol] = 0;
        }
    }
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));

    // Input the maze
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    vector<string> ans;

    // If starting or ending cell is blocked
    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) {
        cout << -1 << endl;
        return 0;
    }

    vector<vector<int>> visited(n, vector<int>(n, 0));

    // Mark starting cell
    visited[0][0] = 1;

    // Start DFS
    solve(0, 0, maze, visited, "", ans, n);

    // Sort the answers
    sort(ans.begin(), ans.end());

    // Print all paths
    if (ans.empty()) {
        cout << -1 << endl;
    } else {
        for (string path : ans) {
            cout << path << " ";
        }
        cout << endl;
    }
    return 0;
}