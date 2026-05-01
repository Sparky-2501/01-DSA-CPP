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
    // Operator overloading for addition
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    // Operator overloading for multiplication
    Complex operator * (const Complex& other) {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;
    
    return 0;
}