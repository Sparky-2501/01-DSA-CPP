#include <bits/stdc++.h>
using namespace std;

int main() {
    // to uppercase
    char word[] = "AppLe";
    
    for(int i=0 ; i<strlen(word) ; i++){
        char ch = word[i];
        if(ch >='a' && ch <= 'z'){
            word[i] = ch - 'a'+'A';
        }
    }
    cout << word;
    return 0;
}