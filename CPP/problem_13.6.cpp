/*
 * CH-230-A
 * a13_p6.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    //initialize a vector of integers
    vector <int> v;
    //add value 8 using loop
    for (int i = 0; i < 20; i++)
        v.push_back(8);

    //try and catch
    try {
        cout << v.at(20) << endl;
    } catch(const out_of_range& a) { //catch if out of range
        //print the following message using cerr and what()
        cerr << "Out of Range Error: " << a.what() << endl;
    }
    return 0;
}
