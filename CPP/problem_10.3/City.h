/*
 * CH-230-A
 * a10_p3.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <string>
//creating a class
class City{
private:
    //initializing parameters
    std::string name;
    int numOfInhabitants;
    std::string mayor;
    double area;
public:
    //setter methods
    void setName(std::string& newName);
    void setMayor(std::string& newMayor);
    void setNumOfInhabitants(int newNum);
    void setArea(double newArea);
    //getter methods
    std::string getName();
    std::string getMayor();
    int getNumOfInhabitants();
    double getArea();
};