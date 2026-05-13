//Question1:Create a class to store Complex numbers. Using operator overloading, create the logic to subtract one complex number from another.

#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    
    Complex operator-(const Complex& other) {   // Overloading the subtraction operator
        return Complex(real - other.real, imag - other.imag);  // Return a new Complex object that is the result of the subtraction
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 1);
    Complex c3 = c1 - c2;
    c3.display();
    return 0;
}