#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> vec = {1,2,3,4};
    cout<< vec.size()<<"\n";    //4
    cout<< vec.capacity()<<"\n";    //4

    vec.push_back(5);
    cout<< vec.size()<<"\n";    //5
    cout<< vec.capacity()<<"\n";    //8

    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout<< vec.size()<<"\n";    //9
    cout<< vec.capacity()<<"\n";    //16
    return 0;
}