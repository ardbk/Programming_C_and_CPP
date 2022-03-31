/*
 * CH-230-A
 * a13_p1.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <fstream>

using namespace std;

int main () {
    //initializing variable to read input
    string inputFileName;
    //read the input
    cout << "Enter the name of a file you want to copy: ";
    cin >> inputFileName;
    //find the index of dot
    int index = inputFileName.find('.');
    //creating the name of a copy file
    string outputFileName;
    outputFileName = inputFileName.substr(0, index) + "_copy" + inputFileName.substr(index, inputFileName.length());
    //initializing input and output files
    ifstream input;
    ofstream output;
    //open input file
    input.open(inputFileName, ios::in | ios::binary);
    //if there is no such file
    if (!input) {
        cout <<"File wasn't found"<<endl;
        return 0;
    }
    //create output file
    output.open(outputFileName, ios::out | ios::binary);
    //copy all data
    output << input.rdbuf();
    //close files
    input.close();
    output.close();
}