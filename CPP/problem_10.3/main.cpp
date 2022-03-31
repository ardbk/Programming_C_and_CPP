/*
 * CH-230-A
 * a10_p3.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "City.h"

using namespace std;

int main() {
    //initializing three "city"
    City Bremen, Paris, London;
    //initializing variables
    string nameB = "Bremen", mayorB = "Mayor Of Bremen", nameP = "Paris", mayorP = "Mayor Of Paris", nameL = "London", mayorL = "Mayor Of London";
    //set parameters for Bremen
    Bremen.setName(nameB);
    Bremen.setArea(100.45);
    Bremen.setMayor(mayorB);
    Bremen.setNumOfInhabitants(12000);

    //set parameters for Paris
    Paris.setName(nameP);
    Paris.setArea(1234.56);
    Paris.setMayor(mayorP);
    Paris.setNumOfInhabitants(30000);

    //set parameters for London
    London.setName(nameL);
    London.setArea(2300.56);
    London.setMayor(mayorL);
    London.setNumOfInhabitants(250000);
    //print the parameters using getter
    cout << Bremen.getName() << " - " << Bremen.getMayor() << " - " << Bremen.getNumOfInhabitants() << " - " << Bremen.getArea() << endl;
    //print the parameters using getter
    cout << Paris.getName() << " - " << Paris.getMayor() << " - " << Paris.getNumOfInhabitants() << " - " << Paris.getArea() << endl;
    //print the parameters using getter
    cout << London.getName() << " - " << London.getMayor() << " - " << London.getNumOfInhabitants() << " - " << London.getArea() << endl;
    return 0;
}
