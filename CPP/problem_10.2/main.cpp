/*
 * CH-230-A
 * a10_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    //initialize variables
	Critter c;
	string name;
	int hunger, boredom;
    double height;

	cout << endl << "Please enter data: " << endl;
	//print the message
	cout << "Name: ";
	//read the input
	getline(cin, name);
	//set this input using setter
	c.setName(name);
    //print the message
	cout << "Hunger: ";
    //read the input
	cin >> hunger;
    //set this input using setter
	c.setHunger(hunger);
    //print the message
    cout << "Boredom: ";
    //read the input
    cin >> boredom;
    //set this input using setter
    c.setBoredom(boredom);
    //print the message
    cout << "Height: ";
    //read the input
    cin >> height;
    //set this input using setter
    c.setHeight(height);
    //print the results
	cout << "You have created:" << endl;
	c.print();
        return 0;
}