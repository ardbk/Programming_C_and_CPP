/*
 * CH-230-A
 * a12_p1.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
    cout << name << endl;
}

Shape::Shape() {
    name = "default_name";
}

Shape::Shape(const Shape & newShape) {
    name = newShape.name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}

CenteredShape::CenteredShape() : Shape() {
    x = 0;
    y = 0;
}

CenteredShape::CenteredShape(const CenteredShape & newCenteredShape) : Shape(newCenteredShape){
    x = newCenteredShape.x;
    y = newCenteredShape.y;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
        CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape() {
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon & newRegularPolygon) : CenteredShape(newRegularPolygon) {
    EdgesNumber = newRegularPolygon.EdgesNumber;

}

Circle::Circle(const string& n, double nx, double ny, double r) :
        CenteredShape(n,nx,ny)
{
    Radius = r;
}
//Hexagon class
//default constructor
Hexagon::Hexagon() : RegularPolygon() {
    side = 0;
    color = "default_color";
}
//parametric constructor
Hexagon::Hexagon(const string &newName, double newX, double newY, double newSide,
                 const string &newColor) : RegularPolygon(newName, newX, newY, 6) {
    side = newSide;
}
//copy constructor
Hexagon::Hexagon(const Hexagon& newHexagon) : RegularPolygon(newHexagon) {
    side = newHexagon.side;
    color = newHexagon.color;
}
//destructor
Hexagon::~Hexagon() {
}
//setter methods
void Hexagon::setSide(double newSide) {
    side = newSide;
}
void Hexagon::setColor(const string &newColor) {
    color = newColor;
}
//getter methods
double Hexagon::getSide() const {
    return side;
}
string Hexagon::getColor() {
    return color;
}
//additional methods
double Hexagon::perimeter() const {
    return 6*side;
}
double Hexagon::area() const {
    return 3*sqrt(3)*side*side/2;
}

