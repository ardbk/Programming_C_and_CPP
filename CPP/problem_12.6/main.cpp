/*
 * CH-230-A
 * a12_p6.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
//           Area
//        /       \
//       /         \
//   Rectangle     Cirlce
//      |             |
//     Square       Ring

const int num_obj = 7;
int main() {
    Area *list[num_obj];//create a array of Area class
    int index = 0;//initialize variable index as int and assign it to zero
    double sum_area = 0.0, sum_perimeter = 0.0;//initialize variable sum_area as double and assign it to zero
    cout << "Creating Ring: ";
    Ring blue_ring("BLUE", 5, 2);//creating a variable blue_ring from Ring class
    cout << "Creating Circle: ";
    Circle yellow_circle("YELLOW", 7);
    cout << "Creating Rectangle: ";
    Rectangle green_rectangle("GREEN",5,6);
    cout << "Creating Circle: ";
    Circle red_circle("RED", 8);
    cout << "Creating Rectangle: ";
    Rectangle black_rectangle("BLACK", 10, 20);
    cout << "Creating Ring: ";
    Ring violet_ring("VIOLET", 100, 5);
    cout << "Creating Square: ";
    Square pink_square("PINK", 15);
    list[0] = &blue_ring; //Assign first element of array list to blue_ring
    list[1] = &yellow_circle;
    list[2] = &green_rectangle;
    list[3] = &red_circle;
    list[4] = &black_rectangle;
    list[5] = &violet_ring;
    list[6] = &pink_square;
    while (index < num_obj) {//loop using while operator, keep going while index is less than num_obj
        (list[index])->getColor();
        double area = list[index++]->calcArea();//calculating area of element list[index++] and assigning it to variable area
        sum_area += area;
    }
    cout << "\nThe total area is "
         << sum_area << " units " << endl;//printing the result, sum_area, with corresponding message
    //calculating total perimeter
    //assigning index to 0
    index = 0;
    //using loop to go through each element
    while (index < num_obj) {
        //printing the color
        (list[index])->getColor();
        //getting perimeter of each element
        double perimeter = list[index++]->calcPerimeter();
        //adding it to total perimeter
        sum_perimeter += perimeter;
    }
    cout << "\nThe total perimeter is "
         << sum_perimeter << " units " << endl;//printing the result, sum_area, with corresponding message
    return 0;
}
