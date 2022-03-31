/*
 * CH-230-A
 * a11_p5.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {

//    Circle c("first circle", 3, 4, 7);
//    RegularPolygon r("TRIANGLE", 1, 1, 3);
//
//    r.printName();
//    c.printName();

    Circle testCircle("Test Circle", 4, 1, 5);
    Rectangle testRectangle("Test Rectangle", 5, 7, 10, 20);
    Square testSquare("Test Square", -5, 10, 30);
    testCircle.printName();
    cout << "was created: " << endl;
    cout << "Area = " << testCircle.area() << endl;
    cout << "Perimeter = " << testCircle.perimeter() << endl << endl;
    testRectangle.printName();
    cout << "was created: " << endl;
    cout << "Area = " << testRectangle.area() << endl;
    cout << "Perimeter = " << testRectangle.perimeter() << endl << endl;
    testSquare.printName();
    cout << "was created: " << endl;
    cout << "Area = " << testSquare.area() << endl;
    cout << "Perimeter = " << testSquare.perimeter() << endl << endl;
}