/*
 * CH-230-A
 * a11_p1.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

using namespace std;

int main() {
    //initializing variables
    int n;
    double tempHeight, tempWidth, tempDepth;
    cout << "Enter the number: ";
    cin >> n;
    //dynamically create array
    Box *arr;
    arr = new Box[2*n];
    //using a loop
    for(int i=0; i<n; i++){
        //read height, width, and depth as inputs
        cout << "Enter the data for the Box #" << i+1 << ":" << endl;
        cout << "     height: ";
        cin >> tempHeight;
        arr[i].setHeight(tempHeight);
        cout << "     width: ";
        cin >> tempWidth;
        arr[i].setWidth(tempWidth);
        cout << "     depth: ";
        cin >> tempDepth;
        arr[i].setDepth(tempDepth);
        //copy i element to i+n
        arr[i+n] = Box(arr[i]);
    }
    //print results using loop
    cout << "\n\nResults:" << endl;
    for(int i=0; i<2*n; i++){
        cout << "Box #" << i+1 << " - " << arr[i].volume() << endl;
    }
    //deallocate array
    delete [] arr;
    return 0;
}
