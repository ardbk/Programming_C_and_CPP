#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;

    // Implement GCD of two numbers;

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);

}
//overloaded operator <<
ostream& operator << (ostream &os, const Fraction &a) {
    os << a.num << "/" << a.den;
    return os;
}
//overloaded operator >>
istream &operator>>(istream  &in, Fraction &a) {
    in >> a.num >> a.den;
    return in;
}
//overloaded operator *
Fraction Fraction::operator * (Fraction &a) const {
    int x,y;
    x=num*a.num;
    y=den*a.den;
    Fraction res(x,y);
    return res;
}
//overloaded operator /
Fraction Fraction::operator / (Fraction &a) const {
    int x,y;
    x=num*a.den;
    y=den*a.num;
    Fraction res(x,y);
    return res;
}