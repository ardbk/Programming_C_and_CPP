/*
 * CH-230-A
 * a12_p3.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main() {
    Player a;
    Player b("Aidyn", "Ardabek", "2002-10-07",
             "Goalkeeper", 200000, 7, 15, "Soccer",
             "Right-footer");
    Player c(b);
    a.addGoal();
    b.addGoal();
    cout << endl;
    a.print();
    cout << endl;
    b.print();
    cout << endl;
    c.print();
    return 0;
}
