/*
 * CH-230-A
 * a13_p2.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <cassert>
#include <iostream>

using namespace std;

class Complex{
private:
    double realPart;
    double imaginaryPart;
public:
    //constructors
    Complex();
    Complex(double newRealPart, double newImaginaryPart);
    Complex(const Complex& newComplex);
    ~Complex();
    //overloaded operator <<
    friend ostream& operator<<(ostream &os, const Complex &a);
    //overloaded operator >>
    friend istream& operator>>(istream  &in, Complex &a);
    //overloaded operators for *, /, +, -, =, <, and >
    Complex operator * (Complex&) const;
    Complex operator + (Complex&) const;
    Complex operator - (Complex&) const;
    Complex& operator = (const Complex&);
    //setter methods
    void setRealPart(double newRealPart);
    void setImaginaryPart(double newImaginaryPart);
    //getter methods
    double getRealPart();
    double getImaginaryPart();
    //additional methods
    Complex conjugate();
};
#endif