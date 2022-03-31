/*
 * CH-230-A
 * a11_p6.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"

using namespace std;

int main(int argc, char** argv) {
    //initializing components of the vector
    double comp1[3] = {1, 3, 5}, comp2[3] = {2, 4, 6};
    //creating vectors
    cout << "The first vector is creating..." << endl;
    Vector v1(3, comp1);
    v1.print();
    cout << "The second vector is creating..." << endl;
    Vector v2(v1);
    v2.print();
    cout << "The third vector is creating..." << endl;
    Vector v3(3, comp2);
    v3.print();
    //calling additional methods
    cout << "The norm of the vector: " << v1.norm() << endl;
    cout << "Adding two vectors..." << endl;
    (v1.add(v3)).print();
    cout << "Subtracting two vectors..." << endl;
    (v1.subtract(v3)).print();
    cout << "Scalar product of two vectors: " << v1.scalarMultiply(v3) << endl;
}