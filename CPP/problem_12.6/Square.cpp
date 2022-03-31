#include <iostream>
#include "Square.h"

using namespace std;
//constructor with parameters
Square::Square(const char *n, double a) : Rectangle(n, a, a) {
}
//destructor
Square::~Square(){

}
//calculating Area method
double Square::calcArea() const{
    std::cout << "calcArea of Square...";
    return Rectangle::calcArea();
}
//calculating Perimeter method
double Square::calcPerimeter() const{
    std::cout << "calcPerimeter of Square...";
    return Rectangle::calcPerimeter();
}
