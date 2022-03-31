/*
 * CH-230-A
 * a11_p6.р
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#ifndef __VECTOR_H
#define __VECTOR_H
#include <string>

class Vector {
private:
    int size;
    double* components;
public:
    //constructor
    Vector();
    Vector(int newSize, const double* newPointer);
    Vector(const Vector& newVector);
    ~Vector();
    //setter methods
    void setSize(int newSize);
    void setComponents(const double* newComponents);
    //getter methods
    int getSize() const;
    double* getComponents();
    //printing method
    void print();
    //additional methods
    double norm();
    Vector add(const Vector& secondVector);
    Vector subtract(const Vector& secondVector);
    double scalarMultiply(const Vector& secondVector);

};

#endif