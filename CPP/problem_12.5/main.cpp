#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a(4, 2);
    Fraction b(17);

    cout << a << endl;
    cout << b << endl;

    cout << "product: " << a*b << endl;
    cout << "quotient: " << a/b << endl;
}