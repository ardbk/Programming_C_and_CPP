/*
 * CH-230-A
 * a12_p4.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_
#include <cassert>
#include <iostream>

using namespace std;

class Fraction {

private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator

    int gcd(int a, int b) const;		// calculates the gcd of a and b
    int lcm(int a, int b) const;

public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
    //overloaded operator <<
    friend ostream& operator<<(ostream &os, const Fraction &a);
    //overloaded operator >>
    friend istream& operator>>(istream  &in, Fraction &a);
    //overloaded operators for *, /, +, -, =, <, and >
    Fraction operator * (Fraction&) const;
    Fraction operator / (Fraction&) const;
    Fraction operator + (Fraction&) const;
    Fraction operator - (Fraction&) const;
    Fraction& operator = (const Fraction&);
    Fraction operator < (const Fraction&);
    Fraction operator > (const Fraction&);
};


#endif /* FRACTION_H_ */