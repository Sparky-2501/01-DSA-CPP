#include <iostream>
using namespace std;

void changeA(int &a)
{
    a = 20;
    cout << "inside function " << a << "\n";
}
int main()
{
    int a = 10;
    int &b = a;
    b = 25;

    cout << b << "\n";    // value of b will be fixed as 10 will not changed
    cout << "inside function " << a << "\n";    // a= 10
    changeA(a);
    cout << "after function " << a << "\n";    // a=20  : will be updated as update in the function is in main memory

    return 0;
}
