/*
 * CH-230-A
 * a11_p6.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
#include <math.h>

using namespace std;
//default constructors
Vector::Vector() {
    size = 0;
    components = new double[0];
}
//constructor with specific values
Vector::Vector(int newSize, const double* newComponents) {
    size = newSize;
    components = new double[size];
    for(int i=0; i<size; i++){
        *(components+i) = *(newComponents+i);
    }
}
//copy constructor
Vector::Vector(const Vector &newVector) {
    size = newVector.size;
    components = new double[size];
    for(int i=0; i<size; i++){
        *(components+i) = *(newVector.components+i);
    }
}
//destructor
Vector::~Vector() {
    delete [] components;
}
//setter methods
void Vector::setSize(int newSize) {
    size = newSize;
}
void Vector::setComponents(const double* newComponents) {
    components = new double[size];
    for(int i=0; i<size; i++){
        *(components+i) = *(newComponents+i);
    }
}
//getter methods
int Vector::getSize() const {
    return size;
}
double* Vector::getComponents() {
    return components;
}
//printing method
void Vector::print() {
    cout << "Components of the vector: ";
    //using loop to print
    for(int i=0; i<size; i++){
        cout << *(components+i) << " ";
    }
    cout << endl;
}
//additional methods
double Vector::norm() {
    double sum = 0;
    for(int i=0; i<size; i++){
        sum += *(components+i) * *(components+i);
    }
    return sqrt(sum);
}
double Vector::scalarMultiply(const Vector& secondVector) {
    double sum = 0;
    for(int i=0; i<size; i++){
        sum += *(components+i) * *(secondVector.components+i);
    }
    return sum;
}
Vector Vector::add(const Vector& secondVector) {
    Vector tempVector;
    tempVector.setSize(size);
    double tempComp[size];
    for(int i=0; i<size; i++){
        tempComp[i] = *(components+i) + *(secondVector.components+i);
    }
    tempVector.setComponents(tempComp);
    return tempVector;
}
Vector Vector::subtract(const Vector& secondVector) {
    Vector tempVector;
    tempVector.setSize(size);
    double tempComp[size];
    for(int i=0; i<size; i++){
        tempComp[i] = *(components+i) - *(secondVector.components+i);
    }
    tempVector.setComponents(tempComp);
    return tempVector;
}