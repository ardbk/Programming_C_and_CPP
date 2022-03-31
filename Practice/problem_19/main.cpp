#include <iostream>

using namespace std;

class Complex {
    private:
        float real;  // real part
        float imag;  // imaginary part
    public:
        Complex();
        Complex(float, float = 0);
        double magnitude() const;
        void print();
        friend ostream& operator<< (ostream& os, const Complex& c);
        Complex operator < (const Complex&);
        Complex operator > (const Complex&);
        Complex& operator = (const Complex& b);
};

Complex::Complex(float newReal, float newImag){
    real = newReal;
    imag = newImag;
}

ostream& operator << (ostream &os, const Complex &a) {
    if (a.imag)
        os << showpos << a.real << showpos << a.imag << "i" << endl;
    else
        os << a.real << endl;
    return os;
}

Complex Complex::operator < (const Complex &b) {
    double x, y;
    x = b.magnitude();
    y = this->magnitude();
    if(x < y) return *this;
    else return b;
}

Complex& Complex::operator = (const Complex &b) {
    real = b.real;
    imag = b.imag;
    return *this;
}
//overloaded operator =
Complex Complex::operator > (const Complex &b) {
    int x, y;
    x = real*b.imag;
    y = b.real*imag;
    if(x > y) return *this;
    else return b;
}

void Complex::print() {
    if (imag)
        cout << showpos << real << showpos << imag << "i" << endl;
    else
        cout << real << endl;
}

int main() {
    Complex a(1, 2);
    a.print();
    return 0;
}
