/*
 * CH-230-A
 * a12_p4.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction a;
    cin >> a;
    Fraction b;
    cin >> b;
    Fraction c;

    cout << a << endl;
    cout << b << endl;
    c = b;
    cout << c << endl;

    cout << "product: " << a*b << endl;
    cout << "quotient: " << a/b << endl;
    cout << "sum: " << a+b << endl;
    cout << "difference: " << a-b << endl;
    cout << "small: " << (a<b) << endl;
    cout << "large: " << (a>b) << endl;

}