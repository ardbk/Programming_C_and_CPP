/*
 * CH-230-A
 * a11_p1.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
class Box{
private:
    double height;
    double width;
    double depth;
public:
    //constructors
    Box();
    Box(double newHeight, double newWidth, double newDepth);
    Box(const Box& newBox);
    ~Box();
    //setter methods
    void setHeight(double newHeight);
    void setWidth(double newWidth);
    void setDepth(double newDepth);
    //getter methods
    double getHeight();
    double getWidth();
    double getDepth();
    //other methods
    double volume();
};