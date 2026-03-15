#include <bits/stdc++.h>
using namespace std;

int main()
{
//CHAR
        char ch1 = 'a';
        char ch2 = 'A';
        char ch3 = '@';
        char ch4 = '\n';
    // takes space of 1 byte
    // ASCII : american standard code for information interchange
    //  'a' => 97
    //  'A' => 65
//CHARACTER ARRAY
        //int arr prints the starting address of array but in char it print actual data 
        char str[6] = {'a','b','c','d','e', '\0'};
        cout << str << "\n";
        cout << strlen(str);
        
        char arr[10] = {'c','o', 'd' , 'e' , '\0'};
        cout << arr << "\n";

        // string literals & length;
        char ch[] = "code";
        char ch9[] = "code";
        cout << ch << "\n" ;
        cout << strlen(ch) << "\n";

        // for input string cin ignores the whitespaces so we use cin.getline('sentence', length);
        char st[30];
        cin.getline(st,30);
        cout<< st;

        cin.getline(st,30,'.');
        //stop at '.'
        
    return 0;
}