#include <bits/stdc++.h>
using namespace std;

//factorial using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    //when a function calls itself, it is called recursion.
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "factorial is : " <<factorial(n) << endl;
    return 0;
}