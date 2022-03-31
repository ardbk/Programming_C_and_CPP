/*
 * CH-230-A
 * a12_p7.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 25;
int main() {
    //to avoid repetetive sequence
    srand(time(nullptr));
    //create array from Area class
    Area *list[num_obj];
    //initialize variables to get random numbers and to calculate the sum
    int obj_random, color_random;
    double a, b, sum_area = 0, sum_perimeter = 0;
    //variable for color
    char* color;
    //using loop to create 25
    for(int i=0; i<num_obj; i++){
        //get random numbers
        obj_random = rand()%4;
        color_random = rand()%4;
        //get corresponding color
        switch (color_random) {
            case 0:
                color = "RED";
                break;
            case 1:
                color = "BLACK";
                break;
            case 2:
                color = "VIOLET";
                break;
            case 3:
                color = "BLUE";
                break;
        }
        //get object from corresponding class
        //inside each, get corresponding sizes by random
        if(obj_random == 0){
            a = rand()%96+5;
            b = rand()%96+5;
            cout << "Creating Ring: ";
            Ring temp_ring(color, a, b);
            list[i] = &temp_ring;
        } else if(obj_random == 1){
            a = rand()%96+5;
            cout << "Creating Circle: ";
            Circle temp_circle(color, a);
            list[i] = &temp_circle;
        } else if(obj_random == 2){
            a = rand()%96+5;
            b = rand()%96+5;
            cout << "Creating Rectangle: ";
            Rectangle temp_rectangle(color, a, b);
            list[i] = &temp_rectangle;
        } else if(obj_random == 3){
            a = rand()%96+5;
            cout << "Creating Square: ";
            Square temp_Square(color, a);
            list[i] = &temp_Square;
        }
    }
    //calculate area and perimeter
    for(int i=0; i<num_obj; i++){
        (list[i])->getColor();
        double area = list[i]->calcArea();//calculating area of element list[index++] and assigning it to variable area
        sum_area += area;
        (list[i])->getColor();
        //getting perimeter of each element
        double perimeter = list[i]->calcPerimeter();
        //adding it to total perimeter
        sum_perimeter += perimeter;
    }
    //print the result
    cout << "\nThe total area is "
         << sum_area << " units " << endl;
    cout << "\nThe total perimeter is "
         << sum_perimeter << " units " << endl;//printing the result, sum_area, with corresponding message
    return 0;

}