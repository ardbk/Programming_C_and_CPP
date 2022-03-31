/*
 * CH-230-A
 * a11_p5.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std;
//class Shape
//Constructor with specific name
Shape::Shape(const string& n) : name(n) {
}
//Default Constructor
Shape::Shape() : name("Default_name"){
}
//Copy Constructor
Shape::Shape(const Shape& newShape) : name(newShape.name){
}
//Additional method
void Shape::printName() const {
    cout << name << endl;
}
//setter method
void Shape::setName(std::string &newName) {
    name = newName;
}
//getter method
string Shape::getName() {
    return name;
}

//class CenteredShape
//Constructor with specific values
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
//Default Constructor
CenteredShape::CenteredShape() : Shape() {
    x = 0;
    y = 0;
}
//Copy Constructor
CenteredShape::CenteredShape(const CenteredShape & newCenteredShape)  : Shape(newCenteredShape) {
    x = newCenteredShape.x;
    y = newCenteredShape.y;
}
//additional method
void CenteredShape::move(double tempX, double tempY) {
    x += tempX;
    y += tempY;
}
//setter methods
void CenteredShape::setX(double newX) {
    x = newX;
}
void CenteredShape::setY(double newY) {
    y = newY;
}
//getter methods
double CenteredShape::getX() const {
    return x;
}
double CenteredShape::getY() const {
    return y;
}
//class RegularPolygon
//Constructor with specific values
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) : CenteredShape(n,nx,ny) {
    EdgesNumber = nl;
}
//Default Constructor
RegularPolygon::RegularPolygon() : CenteredShape() {
    EdgesNumber = 4;
}
//Copy Constructor
RegularPolygon::RegularPolygon(const RegularPolygon& newRegularPolygon)  : CenteredShape(newRegularPolygon) {
    EdgesNumber = newRegularPolygon.EdgesNumber;
}
//setter method
void RegularPolygon::setEdgesNumber(int newEdgesNumber) {
    EdgesNumber = newEdgesNumber;
}
int RegularPolygon::getEdgesNumber() const {
    return EdgesNumber;
}
//class Circle
//Constructor with specific values
Circle::Circle(const string& n, double nx, double ny, double r) : CenteredShape(n,nx,ny) {
    Radius = r;
}
//Default Constructor
Circle::Circle() : CenteredShape() {
    Radius = 0;
}
//Copy Constructor
Circle::Circle(const Circle& newCircle)  : CenteredShape(newCircle) {
    Radius = newCircle.Radius;
}
//setter method
void Circle::setRadius(double newRadius) {
    Radius = newRadius;
}
double Circle::getRadius() const {
    return Radius;
}
//additional method
double Circle::perimeter() const{
    return 2*M_PI*Radius;
}
double Circle::area() const{
    return M_PI*Radius*Radius;
}
//class Rectangle
//Constructor with specific values
Rectangle::Rectangle(const std::string &n, double nx, double ny, double nWidth, double nHeight) : RegularPolygon(n, nx, ny, 4) {
    width = nWidth;
    height = nHeight;
}
//Default Constructor
Rectangle::Rectangle() : RegularPolygon() {
    width = 0;
    height = 0;
}
//Copy Constructor
Rectangle::Rectangle(const Rectangle &newRectangle)  : RegularPolygon(newRectangle) {
    width = newRectangle.width;
    height = newRectangle.height;
}
//setter methods
void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}
void Rectangle::setHeight(double newHeight) {
    height = newHeight;
}
//getter methods
double Rectangle::getWidth() const {
    return width;
}
double Rectangle::getHeight() const {
    return height;
}
//additional method
double Rectangle::perimeter() const{
    return 2*(height+width);
}
double Rectangle::area() const{
    return height*width;
}
//class Square
//Constructor with specific values
Square::Square(const std::string &n, double nx, double ny, double nSide) : RegularPolygon(n, nx, ny, 4){
    side = nSide;
}
//Default Constructor
Square::Square() : RegularPolygon() {
    side = 0;
}
//Copy Constructor
Square::Square(const Square &newSquare)  : RegularPolygon(newSquare) {
    side = newSquare.side;
}
//setter method
void Square::setSide(double newSide){
    side = newSide;
}
//getter method
double Square::getSide() const{
    return side;
}
//additional method
double Square::perimeter() const{
    return 4*side;
}
double Square::area() const{
    return side*side;
}

