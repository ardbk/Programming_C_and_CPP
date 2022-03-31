/*
 * CH-230-A
 * a10_p6.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//methods to set parameters
//assigning every thirst with the same value as hunger
void Critter::setParameters(){
    name = "default_critter";
    height = 5;
    boredom = 0;
    hunger = 0.0;
    thirst = 0.0;
}

void Critter::setParameters(string& newName){
    name = newName;
    height = 5;
    boredom = 0;
    hunger = 0.0;
    thirst = 0.0;
}

void Critter::setParameters(string& newName, int newHunger, int newBoredom) {
    name = newName;
    hunger = newHunger/10.0;
    boredom = newBoredom;
    height = 5;
    thirst = newHunger/10.0;
}

void Critter::setParameters(string& newName, int newHunger, int newBoredom, double newHeight){
    name = newName;
    height = newHeight;
    boredom = newBoredom;
    hunger = newHunger/10.0;
    thirst = newHunger/10.0;
}
//new setParameter with five variables
void Critter::setParameters(std::string &newName, int newHunger, int newBoredom, double newHeight, double newThirst) {
    name = newName;
    height = newHeight;
    boredom = newBoredom;
    hunger = newHunger/10.0;
    thirst = newThirst;
}

//setter methods
void Critter::setName(string& newName) {
    name = newName;
}

void Critter::setHunger(int newHunger) {
    hunger = newHunger/10.0;
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
    return hunger*10;
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger*100 << "%. My boredom level is " <<
    boredom << ". My height is " << height << ". My thirst level is " << thirst << endl;
}