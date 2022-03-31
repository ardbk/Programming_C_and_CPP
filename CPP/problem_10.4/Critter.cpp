/*
 * CH-230-A
 * a10_p4.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//method without supplying any properties
void Critter::setParameters(){
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
}
//method with only supplying a name as parameter
void Critter::setParameters(string& newName){
    name = newName;
    hunger = 0;
    boredom = 0;
    height = 5;
}
//method with supplying name, hunger, and boredom parameters
void Critter::setParameters(string& newName, int newHunger, int newBoredom) {
    name = newName;
    hunger = newHunger;
    boredom = newBoredom;
    height = 5;
}
//method with supplying name, hunger, boredom and height all as parameters
void Critter::setParameters(string& newName, int newHunger, int newBoredom, double newHeight){
    name = newName;
    hunger = newHunger;
    boredom = newBoredom;
    height = newHeight;
}
//method to print all parameters
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << ". My boredom level is " << boredom << ". My height is " << height <<"." << endl;
}