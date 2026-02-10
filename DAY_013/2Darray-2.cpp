#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][2] = {{1,2},{3,4}};
    cout << arr << "==" << &arr[0][0] << "\n";
    cout << arr+1 << "!=" << &arr[0][1] << "\n";
    cout << arr+1 << "==" << &arr[1][0] << "\n";
    return 0;
}
