/*
 * CH-230-A
 * a13_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main() {
    ifstream in1, in2;
    ofstream output;
    //open input file
    in1.open("in1.txt", ios::in | ios::binary);
    in2.open("in2.txt", ios::in | ios::binary);
    //create output file
    output.open("output.txt", ios::out | ios::binary);
    //if there is no such file
    if (!in1 || !in2 || !output) {
        cout <<"File wasn't found or created"<<endl;
        return 0;
    }
    //creating two complex variables
    Complex a, b;
    //reading them
    in1 >> a;
    in2 >> b;
    cout << "Sum: " << (a+b);
    cout << "Difference: " << (a-b);
    cout << "Product: " << (a*b);

    output << "Sum: " << (a+b);
    output << "Difference: " << (a-b);
    output << "Product: " << (a*b);

    //close files
    in1.close();
    in1.close();
    output.close();
    return 0;
}