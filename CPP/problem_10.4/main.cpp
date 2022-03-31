/*
 * CH-230-A
 * a10_p4.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    //initializing variables
	Critter a, b, c, d;
	string name = "Aidyn";
	//testcases for all setParameters options and then print
    a.setParameters();
    a.print();
    b.setParameters(name);
    b.print();
    c.setParameters(name, 2, 0);
    c.print();
    d.setParameters(name, 2, 4, 5);
    d.print();
    return 0;
}