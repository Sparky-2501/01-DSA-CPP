#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    strcpy(str1, "healthy DSA");
    strcpy(str2, str1);
    // cout << str1 << "\n" << str2;

    char str3[100] = " successful future";
    strcat(str2,str3);
    cout << str1 << "\n" << str2 << "\n" << str3 << "\n";
    return 0;
}