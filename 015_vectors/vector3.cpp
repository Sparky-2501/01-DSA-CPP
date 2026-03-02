#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, column;
    cout << "rows: ";
    cin >> row;
    cout << "columns: ";
    cin >> column;

    int** matrix = new int*[row];

    // Allocate memory for each row
    for(int i = 0; i < row; i++){
        matrix[i] = new int[column];
    }

    // Fill matrix
    int x = 1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix[i][j] = x;
            x++;
        }
    }

    // Print matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < row; i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}