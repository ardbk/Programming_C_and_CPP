/*
 * CH-230-A
 * a11_p1.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

using namespace std;
//constructors
//default constructor
Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}
//constructor with certain values
Box::Box(double newHeight, double newWidth, double newDepth){
    height = newHeight;
    width = newWidth;
    depth = newDepth;
}
//copy constructor
Box::Box(const Box& newBox){
    height = newBox.height;
    width = newBox.width;
    depth = newBox.depth;
}
//destructor
Box::~Box(){
    cout << "Empty destructor" << endl;
}
//to calculate volume
double Box::volume(){
    return height*width*depth;
}

//setter methods
void Box::setHeight(double newHeight) {
    height = newHeight;
}

void Box::setDepth(double newDepth) {
    depth = newDepth;
}

void Box::setWidth(double newWidth) {
    width = newWidth;
}
//getter methods
double Box::getHeight() {
    return height;
}

double Box::getDepth() {
    return depth;
}

double Box::getWidth() {
    return width;
}