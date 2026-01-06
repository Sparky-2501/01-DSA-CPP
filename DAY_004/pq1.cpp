#include <iostream>
using namespace std;

int main(){
    int n=5;
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;

    int p2 = 0, p1 = 1, ans = 0;
    for (int i = 2; i <= n; i++)
    {
        ans = p1 + p2;
        p2 = p1;
        p1 = ans;
    }
    return ans;
}

// 0,1,1,

// a=0,b=1
// a=1 b=1
// a=1 b=2