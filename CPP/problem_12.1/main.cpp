/*
 * CH-230-A
 * a12_p1.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
    //creating two two Hexagons
    Hexagon h1("Hexagon_1", 0, 0, 9, "blue"), h2("Hexagon_2", 0, 0, 15, "green");
    //creating a copy of the second one
    Hexagon h3(h2);
    //printing perimeter and area of all three Hexagons
    cout << "Perimeter of the " << h1.getColor() << " Hexagon: " << h1.perimeter() << endl;
    cout << "Perimeter of the " << h2.getColor() << " Hexagon: " << h2.perimeter() << endl;
    cout << "Perimeter of the " << h3.getColor() << " Hexagon: " << h3.perimeter() << endl;
    cout << "Area of the " << h1.getColor() << " Hexagon: " << h1.area() << endl;
    cout << "Area of the " << h2.getColor() << " Hexagon: " << h2.area() << endl;
    cout << "Area of the " << h3.getColor() << " Hexagon: " << h3.area() << endl;
    return 0;
}
