#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(const char *n, double a);
    ~Square();
    double calcArea() const;
    //method to calculate perimeter
    double calcPerimeter() const;
};

#endif
