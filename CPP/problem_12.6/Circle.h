#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
public:
    Circle(const char *n, double a);
    ~Circle();
    double calcArea() const;
    //method to calculate perimeter
    double calcPerimeter() const;
private:
    double radius;
};

#endif
