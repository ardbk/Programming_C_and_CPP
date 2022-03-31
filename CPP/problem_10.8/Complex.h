/*
 * CH-230-A
 * a10_p8.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
class Complex{
private:
    double realPart;
    double imaginaryPart;
public:
    //constructors
    Complex();
    Complex(double newRealPart, double newImaginaryPart);
    Complex(const Complex& newComplex);
    ~Complex();
    //setter methods
    void setRealPart(double newRealPart);
    void setImaginaryPart(double newImaginaryPart);
    //getter methods
    double getRealPart();
    double getImaginaryPart();
    //additional methods
    Complex conjugate();
    Complex add(Complex a);
    Complex subtract(Complex a);
    Complex multiply(Complex a);
    void print();
};
