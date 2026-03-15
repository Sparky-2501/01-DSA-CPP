#include <bits/stdc++.h>
using namespace std;

void swap(int num1, int num2)
{
}

int main()
{
    // reverse an array
    char str[] = "codef";
    // cout << strlen(str);
    int i = 0, j = strlen(str) - 1;

    while (j >= i)
    {
        int temp =str[i] ;
        str[i]= str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout << str;
    return 0;
}