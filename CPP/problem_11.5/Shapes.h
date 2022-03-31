/*
 * CH-230-A
 * a11_p5.р
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
//class Shape
class Shape {
private:
    //parameters of the class
    std::string name;
public:
    //Constructors of the class
    Shape(const std::string&);
    Shape();
    Shape(const Shape&);
    //additional method
    void printName() const ;
    //setter method
    void setName(std::string& newName);
    //getter method
    std::string getName();
};
//class CenteredShape inherits from Shape
class CenteredShape : public Shape {
private:
    //parameters of the class
    double x,y;
public:
    //Constructors
    CenteredShape(const std::string&, double, double);
    CenteredShape();
    CenteredShape(const CenteredShape&);
    //additional method
    void move(double, double);	// moves the shape, i.e. it modifies it center
    //setter methods
    void setX(double newX);
    void setY(double newY);
    //getter methods
    double getX() const;
    double getY() const;
};
//class RegularPolygon inherit from CenteredShape
class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
private:
    //parameters of the class
    int EdgesNumber;
public:
    //Constructors
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
    //setter method
    void setEdgesNumber(int newEdgesNumber);
    //getter method
    int getEdgesNumber() const;
};
//class Circle inherits from Centered Shape
class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
private:
    //parameters of the class
    double Radius;
public:
    //Constructors
    Circle(const std::string& n, double nx, double ny, double nSide);
    Circle();
    Circle(const Circle&);
    //setter method
    void setRadius(double newRadius);
    //getter method
    double getRadius() const;
    //additional method
    double perimeter() const;
    double area() const;
};
//class Rectangle inherits from RegularPolygon
class Rectangle : public RegularPolygon {
private:
    //parameters of the class
    double width, height;
public:
    //Constructors
    Rectangle(const std::string& n, double nx, double ny, double nWidth, double nHeight);
    Rectangle();
    Rectangle(const Rectangle& newRectangle);
    //setter methods
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    //getter methods
    double getWidth() const;
    double getHeight() const;
    //additional method
    double perimeter() const;
    double area() const;
};
//class Square inherits from RegularPolygon
class Square : public RegularPolygon {
private:
    //parameters of the class
    double side;
public:
    //Constructors
    Square(const std::string& n, double nx, double ny, double nSide);
    Square();
    Square(const Square& newSquare);
    //setter method
    void setSide(double newSide);
    //getter method
    double getSide() const;
    //additional method
    double perimeter() const;
    double area() const;
};

#endif