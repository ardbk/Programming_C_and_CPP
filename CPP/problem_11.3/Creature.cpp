/*
 * CH-230-A
 * a11_p3.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

//Creature's constructor
Creature::Creature(): distance(10) {
    //printing corresponding message
    cout << "Calling Creature default constructor" << endl;
}
//Creature's method
void Creature::run() const {
    //printing corresponding result
    cout << "running " << distance << " meters!\n";
}

//Animals' constructor
Animals::Animals() : size(1.5) {
    //printing corresponding message
    cout << "Calling Animals default constructor" << endl;
}
//Animals' method
void Animals::step() const {
    //printing corresponding result
    cout << (distance / size) << " steps was made!" << endl;
}
//Vehicle's constructor
Vehicle::Vehicle() : totalDistance(25), speed(40.5) {
    //printing corresponding message
    cout << "Calling Vehicle default constructor" << endl;
}
//Vehicle's method
void Vehicle::leftDistance() const {
    //printing corresponding result
    cout << (totalDistance-distance) << " meters left" <<  endl;
}
//Vehicle's method
void Vehicle::time() const {
    //printing corresponding result
    cout << (distance / speed) << " minutes already passed" << endl;
}
//Wizard's constructor
Wizard::Wizard() : distFactor(3) {
    //printing corresponding message
    cout << "Calling Vehicle default constructor" << endl;
}
//Wizard's method
void Wizard::hover() const {
    //printing corresponding result
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}