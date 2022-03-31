/*
 * CH-230-A
 * a10_p6.h
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
    //adding new parameter
    double thirst;

public: // business logic methods are public
    // setter methods
    void setParameters();
    void setParameters(std::string& newName);
    void setParameters(std::string& newName, int newHunger, int newBoredom);
    void setParameters(std::string& newName, int newHunger, int newBoredom, double newHeight);
    //new set parameter with five variables
    void setParameters(std::string& newName, int newHunger, int newBoredom, double newHeight, double newThirst);
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