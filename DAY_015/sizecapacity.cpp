#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> vec;
    for(int i=0 ; i< 5 ; i++){
        vec.push_back(i);
    }
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    return 0;
}
/*
i   size   capacity
0   1      1    |1|
1   2      2    |1|2|  {if full doubles the capacity}
2   3      4    |1|2|3|_|
3   4      4    |1|2|3|4|   {if full doubles the capacity}
4   5      10   |1|2|3|4|5|_|_|_|_|_|
*/