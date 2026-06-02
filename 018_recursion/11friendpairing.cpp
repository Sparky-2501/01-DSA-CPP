//friend pairing problem with recursion
#include <bits/stdc++.h>
using namespace std;    

int friendPairing(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return n;
    }
    
    // If the first friend is single, then the remaining friends can be paired in friendPairing(n-1) ways
    int single = friendPairing(n - 1);
    
    // If the first friend is paired with any of the remaining (n-1) friends, then we have (n-1) choices for pairing and the remaining friends can be paired in friendPairing(n-2) ways
    int paired = (n - 1) * friendPairing(n - 2);
    
    return single + paired;
}


int main() {
    int n;
    cout << "Enter the number of friends: ";
    cin >> n;
    
    cout << "Number of ways to pair " << n << " friends: " << friendPairing(n) << endl;
    
    return 0;
}