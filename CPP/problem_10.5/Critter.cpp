/*
 * CH-230-A
 * a10_p5.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//set parameters using overloading
void Critter::setParameters(){
    name = "default_critter";
    height = 5;
    boredom = 0;
    hunger = 0.0;
}

void Critter::setParameters(string& newName){
    name = newName;
    height = 5;
    boredom = 0;
    hunger = 0.0;
}

void Critter::setParameters(string& newName, int newHunger, int newBoredom) {
    name = newName;
    //divide by 10.0 to get double value
    hunger = newHunger/10.0;
    boredom = newBoredom;
    height = 5;
}

void Critter::setParameters(string& newName, int newHunger, int newBoredom, double newHeight){
    name = newName;
    height = newHeight;
    boredom = newBoredom;
    //divide by 10.0 to get double value
    hunger = newHunger/10.0;
}

//setter methods
void Critter::setName(string& newName) {
    name = newName;
}

void Critter::setHunger(int newHunger) {
    //divide by 10.0 to get double value
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
//to get this value as an integer we multiply it by 10
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
    //multiply by 100 to show in %
    cout << "I am " << name << ". My hunger level is " << hunger*100 << "%. My boredom level is " << boredom << ". My height is " << height <<"." << endl;
}