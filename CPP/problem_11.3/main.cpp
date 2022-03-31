/*
 * CH-230-A
 * a11_p3.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main() {
    //creating using constructors and testing corresponding methods
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //another instance
    cout << "\nCreaing a Wizard.\n";
    Wizard w2;
    w2.run();
    w2.hover();

    cout << "\nCreating an Animal.\n";
    Animals a;
    a.run();
    a.step();

    cout << "\nCreating an Vehicle.\n";
    Vehicle v;
    v.run();
    v.leftDistance();
    v.time();

    return 0;
}