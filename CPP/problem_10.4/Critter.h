/*
 * CH-230-A
 * a10_p4.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;

public: // business logic methods are public
    //methods for setting parameters
    void setParameters();
    void setParameters(std::string& newName);
    void setParameters(std::string& newName, int newHunger, int newBoredom);
    void setParameters(std::string& newName, int newHunger, int newBoredom, double newHeight);
    // service method
    void print();
};