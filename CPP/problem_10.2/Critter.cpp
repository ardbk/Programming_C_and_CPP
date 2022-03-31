/*
 * CH-230-A
 * a10_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//setter methods
void Critter::setName(string& newName) {
    name = newName;
}

void Critter::setHunger(int newHunger) {
    hunger = newHunger;
}

void Critter::setBoredom(int newBoredom) {
    boredom = newBoredom;
}

void Critter::setHeight(double newHeight) {
    height = newHeight;
}
//getter methods
string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    return hunger;
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}
// service method
void Critter::print() {
    //print corresponding message
    cout << "I am " << name << ". My hunger level is " << hunger << "." << ". My boredom level is " << boredom << ". My height is " << height <<"." << endl;
}

