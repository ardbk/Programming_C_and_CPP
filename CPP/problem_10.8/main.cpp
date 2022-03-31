/*
 * CH-230-A
 * a10_p8.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    //initializing variables
    double aRealPart, aImaginaryPart, bRealPart, bImaginaryPart;
    //printing message and reading input from the keyboard to initialize a new complex number
    cout << "First complex number: " << endl;
    cout << "Real Part: ";
    cin >> aRealPart;
    cout << "Imaginary Part: ";
    cin >> aImaginaryPart;
    Complex a(aRealPart, aImaginaryPart);
    //print the complex number that was created
    cout << "You created: ";
    a.print();
    //printing message and reading input from the keyboard to initialize a new complex number
    cout <<"Second complex number: " << endl;
    cout << "Real Part: ";
    cin >> bRealPart;
    cout << "Imaginary Part: ";
    cin >> bImaginaryPart;
    Complex b(bRealPart, bImaginaryPart);
    //print the complex number that was created
    cout << "You created: ";
    b.print();
    //initialize a new complex number
    Complex c;
    //print the message, call the conjugate method, and print the result
    cout << "Conjugate of the first complex number: ";
    c = a.conjugate();
    c.print();
    //print the message, call the add method, and print the result
    cout << "Sum of the first and second complex numbers: ";
    c = a.add(b);
    c.print();
    //print the message, call the subtract method, and print the result
    cout << "Difference between the first and second complex numbers: ";
    c = a.subtract(b);
    c.print();
    //print the message, call the multiply method, and print the result
    cout << "Multiplication of the first and second complex numbers: ";
    c = a.multiply(b);
    c.print();
    return 0;
}