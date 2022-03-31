/*
 * CH-230-A
 * a10_p3.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include "City.h"
using namespace std;
//setter methods
void City::setName(string& newname) {
    name = newname;
}

void City::setNumOfInhabitants(int newNum) {
    numOfInhabitants = newNum;
}

void City::setMayor(string& newMayor){
    mayor = newMayor;
}

void City::setArea(double newArea) {
    area = newArea;
}
//getter methods
string City::getName(){
    return name;
}

string City::getMayor(){
    return mayor;
}

int City::getNumOfInhabitants(){
    return numOfInhabitants;
}

double City::getArea(){
    return area;
}

