/*
 * CH-230-A
 * a13_p3.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    string name[n];
    for(int i=0; i<n; i++){
        cout << "Enter the file name " << i+1 <<": ";
        cin >> name[i];
    }
    ofstream output( "concatn.txt", ios::in | ios::binary);

    for(int i=0; i<n; i++){
        ifstream input(name[i], ios::in | ios::binary);
        output << input.rdbuf();
        output << "\n";
        input.close();
    }
    output.close();
    return 0;
}
