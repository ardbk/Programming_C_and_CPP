// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

using namespace std;

class Fraction {

private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator

    int gcd(int a, int b);		// calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
    //overloaded operator <<
    friend ostream& operator<<(ostream &os, const Fraction &a);
    //overloaded operator >>
    friend istream& operator>>(istream  &in, Fraction &a);
    //overloaded operator *
    Fraction operator*(Fraction&) const;
    //overloaded operator /
    Fraction operator/(Fraction&) const;
};


#endif /* FRACTION_H_ */