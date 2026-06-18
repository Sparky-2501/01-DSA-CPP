// Binary String
#include <bits/stdc++.h>
using namespace std;

// Function to generate all binary strings of length n
// The function uses recursion to build the binary strings
// Parameters:
//   n: the number of bits
//   output: the current binary string being built
// Base case: if n is 0, print the output string
// Recursive case: append '0' and '1' to the output string and call the function with n-1
// Time complexity: O(2^n) since there are 2^n binary strings of length n
// Space complexity: O(n) for the recursion stack

void printBinaryString(int n, string output) {
    if (n == 0) {
        cout << output << endl;
        return;
    }
    printBinaryString(n - 1, output + "0");
    printBinaryString(n - 1, output + "1");
}

int main() {
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;
    printBinaryString(n, "");
    return 0;
}