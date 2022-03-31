/*
 * CH-230-A
 * a10_p6.cpp
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
    Critter a, b, c, d, e;
    string name = "Aidyn";
    //call setParameters to check every option and then print the result
    a.setParameters();
    a.print();
    b.setParameters(name);
    b.print();
    c.setParameters(name, 2, 0);
    c.print();
    d.setParameters(name, 2, 4, 5);
    d.print();
    e.setParameters(name, 2, 5, 3, 1.5);
    e.print();
    return 0;
}