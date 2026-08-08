#include <bits/stdc++.h>
using namespace std;
//n queen problem


void printBoard(vector<vector<char>> board){
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board.size(); j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------------" << endl;
}

bool isSafe(vector<vector<char>> board, int row, int col){
    //check for row
    for(int j=0; j<board.size(); j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }

    //check for column
    for(int i = 0; i < row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    //check for left diagonal
    for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    //check for right diagonal
    for(int i = row-1, j = col+1; i >= 0 && j < board.size(); i--, j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}
int nQueens(vector<vector<char>> board, int row){
    int n = board.size();
    int count = 0;

    if(row == n){
        printBoard(board);
        return 1;
    }

    for(int col = 0; col < n; col++){
        if(isSafe(board,row,col)){
            board[row][col] = 'Q';
            count += nQueens(board,row+1);
            board[row][col] = '.'; //backtrack
        }
    }
    return count;
}

int main() {
    int n =2;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    int total = nQueens(board,0);
    cout << "Total number of solutions: " << total << endl;
    return 0;
}