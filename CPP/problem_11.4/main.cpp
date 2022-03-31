/*
 * CH-230-A
 * a11_p4.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main() {
    //endless loop
    while(1){
        //initializing variable to read an input
        string input;
        cout << "Enter the input - ";
        cin >> input;
        if(input == "wizard"){
            Wizard *w;
            w = new Wizard;
            w->run();
            w->hover();
            delete w;
        } else if(input == "animals"){
            Animals *a;
            a = new Animals;
            a->run();
            a->step();
            delete a;
        } else if(input == "vehicle"){
            Vehicle *v;
            v = new Vehicle;
            v->run();
            v->leftDistance();
            v->time();
            delete v;
        } else if(input == "quit"){
            return 0;
        } else cout << "Try again!" << endl;
    }
}