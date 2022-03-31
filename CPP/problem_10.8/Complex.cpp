/*
 * CH-230-A
 * a10_p8.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"

using namespace std;
//creating constructor for default complex number
Complex::Complex() {
    realPart = 0;
    imaginaryPart = 0;
}
//creating constructor to create a complex number with given variables
Complex::Complex(double newRealPart, double newImaginaryPart) {
    realPart = newRealPart;
    imaginaryPart = newImaginaryPart;
}
//creating a constructor to copy
Complex::Complex(const Complex &newComplex) {
    //assigning corresponding values
    realPart = newComplex.realPart;
    imaginaryPart = newComplex.imaginaryPart;
}
//empty destructor
Complex::~Complex() {}
//create conjugate methods
Complex Complex::conjugate(){
    //create a temp complex
    Complex temp;
    //set real and imaginary part using setters
    temp.setImaginaryPart((-1) * imaginaryPart);
    temp.setRealPart(realPart);
    //return this complex
    return temp;
}
//create add method
Complex Complex::add(Complex a){
    //create a temp complex
    Complex temp;
    //set real and imaginary part using setters
    temp.setImaginaryPart(imaginaryPart + a.imaginaryPart);
    temp.setRealPart(realPart + a.realPart);
    //return this complex
    return temp;
}
//create subtract method
Complex Complex::subtract(Complex a){
    //create a temp complex
    Complex temp;
    //set real and imaginary part using setters
    temp.setImaginaryPart(imaginaryPart - a.imaginaryPart);
    temp.setRealPart(realPart - a.realPart);
    //return this complex
    return temp;
}
//create multiply method
Complex Complex::multiply(Complex a){
    //create a temp complex
    Complex temp;
    //set real and imaginary part using setters
    temp.setRealPart((realPart * a.realPart) - (imaginaryPart * a.imaginaryPart));
    temp.setImaginaryPart((imaginaryPart * a.realPart) + (realPart * a.imaginaryPart));
    //return this complex
    return temp;
}
//create print method
void Complex::print() {
    if(imaginaryPart < 0){
        cout << realPart << " - " << abs(imaginaryPart) << "i" << endl;
    }
    else {
        cout << realPart << " + " << imaginaryPart << "i" << endl;
    }
}

//setter methods
void Complex::setRealPart(double newRealPart) {
    realPart = newRealPart;
}

void Complex::setImaginaryPart(double newImaginaryPart) {
    imaginaryPart = newImaginaryPart;
}
//getter methods
double Complex::getRealPart() {
    return realPart;
}

double Complex::getImaginaryPart() {
    return imaginaryPart;
}