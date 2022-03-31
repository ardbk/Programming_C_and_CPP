/*
 * CH-230-A
 * a10_p2.h
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