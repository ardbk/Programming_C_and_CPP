/*
 * CH-230-A
 * a13_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <limits>
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
//overloaded operator <<
ostream& operator << (ostream &os, const Complex &a){
    //check imaginary part to print with sign
    if(a.imaginaryPart < 0){
        os << a.realPart << " - " << abs(a.imaginaryPart) << "i" << endl;
    }
    else {
        os << a.realPart << " + " << a.imaginaryPart << "i" << endl;
    }
    return os;
}
//overloaded operator >>
istream& operator >> (istream  &in, Complex &a){
    in >> a.realPart;
    while(1){ //Validity check
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Invalid input!"<<endl;
            in>>a.realPart;
        }
        if(!cin.fail()) break;
    }
    in >> a.imaginaryPart;
    while(1){ //Validity check
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Invalid input!"<<endl;
            in>>a.imaginaryPart;
        }
        if(!cin.fail()) break;
    }
    return in;
}
//overloaded operators
Complex Complex::operator * (Complex& a) const{
    //create a temp complex
    Complex temp;
    //set real and imaginary part using setters
    temp.setRealPart((realPart * a.realPart) - (imaginaryPart * a.imaginaryPart));
    temp.setImaginaryPart((imaginaryPart * a.realPart) + (realPart * a.imaginaryPart));
    //return this complex
    return temp;
}
Complex Complex::operator + (Complex& a) const{
    //create a temp complex
    Complex temp;
    //set real and imaginary part using setters
    temp.setImaginaryPart(imaginaryPart + a.imaginaryPart);
    temp.setRealPart(realPart + a.realPart);
    //return this complex
    return temp;
}
Complex Complex::operator - (Complex& a) const{
    //create a temp complex
    Complex temp;
    //set real and imaginary part using setters
    temp.setImaginaryPart(imaginaryPart - a.imaginaryPart);
    temp.setRealPart(realPart - a.realPart);
    //return this complex
    return temp;
}
Complex& Complex::operator = (const Complex&a ){
    realPart = a.realPart;
    imaginaryPart = a.imaginaryPart;
    return *this;
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