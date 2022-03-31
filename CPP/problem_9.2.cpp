/*
 * CH-230-A
 * a9_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;

int main() {
    //initializing variables
    int n;
    double d;
    string s;
    //reading input for each variable
    cout << "Integer: " << endl;
    cin >> n;
    cout << "Double: " << endl;
    cin >> d;
    cout << "String: " << endl;
    cin >> s;
    //using loop to print n times
    for(int i=0; i<n; i++){
        //printing corresponding text
        cout << s << ":" << d <<endl;
    }
    return 0;
}
