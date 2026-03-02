#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    strcpy(str1, "healthy DSA");
    strcpy(str2, str1);
    // cout << str1 << "\n" << str2;

    char str3[100] = " successful,bright future";
    strcat(str3,str2);
   //cout << str1 << "\n" << str2 << "\n" << str3 << "\n";
   
    //str1 => healthy dsa
    //str2 => healthy dsa
    //str3 => succ fututre healthy dsa
    cout << strcmp(str1,str2) << "\n"; //0
    cout << strcmp(str2,str3) << "\n"; //+ve
    cout << strcmp(str3,str2) << "\n"; //-ve
    cout << strcmp(str1,str3) << "\n"; //+ve
    return 0;
}