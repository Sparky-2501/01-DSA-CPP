// Binary String
#include <iostream>
#include <string>
using namespace std;

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