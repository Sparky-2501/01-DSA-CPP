#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    // Function Overloading: The ability to create multiple functions with the same name but different parameters.
    Calculator calc;
    cout << "Sum of 2 and 3: " << calc.add(2, 3) << endl; // Calls add(int, int)
    cout << "Sum of 1, 2 and 3: " << calc.add(1, 2, 3) << endl; // Calls add(int, int, int)
    cout << "Sum of 2.5 and 3.5: " << calc.add(2.5, 3.5) << endl; // Calls add(double, double)
    return 0;
}