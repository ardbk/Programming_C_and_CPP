/*
 * CH-230-A
 * a12_p4.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <limits>
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

int Fraction::gcd(int a, int b) const {
    int tmp_gcd = 1;
    for (int i=1; i<=a || i<=b; i++)
    {
        if (a%i == 0 && b%i == 0)
            tmp_gcd = i;
    }
    return tmp_gcd;
}

int Fraction::lcm(int a, int b) const {
    return a * b / gcd(a, b);

}
//overloaded operator <<
ostream& operator << (ostream &os, const Fraction &a) {
    os << a.num << "/" << a.den;
    return os;
}
//overloaded operator >>
istream &operator>>(istream  &in, Fraction &a) {
    in >> a.num;
    while(1){ //Validity check
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Invalid input!"<<endl;
            cin>>a.num;
        }
        if(!cin.fail()) break;
    }
    in >> a.den;
    while(1){ //Validity check
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Invalid input!"<<endl;
            cin>>a.den;
        }
        if(!cin.fail()) break;
    }
    return in;
}
//overloaded operator *
Fraction Fraction::operator * (Fraction &a) const {
    int x,y;
    x=num*a.num;
    y=den*a.den;
    Fraction temp(x,y);
    return temp;
}
//overloaded operator /
Fraction Fraction::operator / (Fraction &a) const {
    int x,y;
    x=num*a.den;
    y=den*a.num;
    Fraction temp(x,y);
    return temp;
}
//overloaded operator +
Fraction Fraction::operator + (Fraction& a) const{
    int x, y;
    x = num*lcm(den, a.den)/den + a.num*lcm(den, a.den)/a.den;
    y = lcm(den, a.den);
    Fraction temp(x, y);
    return temp;
}
//overloaded operator -
Fraction Fraction::operator - (Fraction& a) const{
    int x, y;
    x = num*lcm(den, a.den)/den - a.num*lcm(den, a.den)/a.den;
    y = lcm(den, a.den);
    Fraction temp(x, y);
    return temp;
}
//overloaded operator =
Fraction& Fraction::operator = (const Fraction& a) {
    num = a.num;
    den = a.den;
    return *this;
}
//overloaded operator =
Fraction Fraction::operator < (const Fraction &b) {
    int x, y;
    x = num*b.den;
    y = b.num*den;
    if(x < y) return *this;
    else return b;
}
//overloaded operator =
Fraction Fraction::operator > (const Fraction &b) {
    int x, y;
    x = num*b.den;
    y = b.num*den;
    if(x > y) return *this;
    else return b;
}