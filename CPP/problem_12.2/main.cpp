/*
 * CH-230-A
 * a12_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main() {
    TournamentMember a;
    TournamentMember b("Aidyn", "Ardabek", "2020-11-28", "Player", 150000);
    TournamentMember d(b);
    d.setFirstName("first_name");
    d.setSecondName("last_name");
    d.setRole("Coach");

    cout << endl;
    a.print();
    cout << endl;
    b.print();
    cout << endl;
    d.print();
    cout << endl;
    return 0;
}
