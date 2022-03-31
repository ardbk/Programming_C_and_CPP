/*
 * CH-230-A
 * a10_p5.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    double hunger;
    int boredom;
    double height;

public: // business logic methods are public
    // set parameters methods
    void setParameters();
    void setParameters(std::string& newName);
    void setParameters(std::string& newName, int newHunger, int newBoredom);
    void setParameters(std::string& newName, int newHunger, int newBoredom, double newHeight);
     // setter methods
    void setName(std::string& newName);
    void setHunger(int newHunger);
    void setBoredom(int newBoredom);
    void setHeight(double newHeight);
    // getter methods
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    // service method
    void print();
};